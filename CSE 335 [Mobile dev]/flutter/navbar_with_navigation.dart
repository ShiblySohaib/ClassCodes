import 'package:flutter/material.dart';
import 'home.dart';
import 'search.dart';
import 'profile.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter App!!',
      home: const MyHomePage(title: 'Flutter Example App'),
      debugShowCheckedModeBanner: false,
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  var Taps = ["Home" , "Search", "Profile"];
  List<Widget> widgetList = [Home(), Search(), Profile()];
  int _currentState = 0;
  @override
  Widget build(BuildContext context){
    return Scaffold(
      appBar: AppBar(title: Text("Nav Bar")),
      body: widgetList[_currentState],
      backgroundColor: Colors.cyan[100],
      bottomNavigationBar: BottomNavigationBar(
        currentIndex: _currentState,
        items:[
          BottomNavigationBarItem(
            icon: Icon(Icons.home),
            label: "Home",
            backgroundColor: Colors.red,
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.search),
            label: "Search",
            backgroundColor: Colors.red,
          ),
          BottomNavigationBarItem(
            icon: Icon(Icons.person),
            label: "Profile",
            backgroundColor: Colors.red,
          ),

        ],
        onTap: (index){
          setState(() {
            _currentState = index;   
                    });
        },
      ),
    );
  }
}
