import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
         appBar: AppBar(
          title: Text('Scroll_View'),
          backgroundColor: Colors.blue,
        ),
        body: ListView(
            children:[
              Container(
                height: 200,
                color: Colors.red,
                margin: EdgeInsets.only(bottom:10),
              ),
              Container(
                height: 200,
                color: Colors.yellow,
                margin: EdgeInsets.only(bottom:10),
              ),
              Container(
                height: 200,
                color: Colors.grey,
                margin: EdgeInsets.only(bottom:10),
              ),
              Container(
                height: 200,
                color: Colors.cyan,
                margin: EdgeInsets.only(bottom:10),
              )
            ]
          
        )
      ),
    );
  }
}
