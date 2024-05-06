import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  final List<String> listString = ["One", "Two", "Three", "Four", "Five"];

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        appBar: AppBar(
          title: Text('Scroll_View'),
          backgroundColor: Colors.blue,
        ),
        body: ListView.separated(
          itemBuilder: (BuildContext context, int index) {
            return ListTile(
              leading: Text('$index'),
              title: Text("Title"),
              subtitle: Text("Subtitle"),
              trailing: Icon(Icons.add),
            );
          },
          separatorBuilder: (context, index){
            return Divider(height: 100, thickness: 5);
          },
          itemCount: listString.length,
        ),
      ),
    );
  }
}
