import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  var listString = ["One", "Two", "Three", "Four", "Five"];
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
         appBar: AppBar(
          title: Text('Scroll_View'),
          backgroundColor: Colors.blue,
        ),
        body: ListView.builder(
          itemBuilder: (context, index){
            return Container(
              height: 200,
              color: Colors.orange,
              margin: EdgeInsets.only(bottom: 10),
              child: Center(
                child: Text(listString[index], style: TextStyle(fontSize: 24))
              ),
            );
          },
          itemCount: listString.length,
        ),  
      ),
    );
  }
}
