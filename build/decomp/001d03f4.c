// OoT3D decomp @ 001d03f4  name=FUN_001d03f4  size=240

void FUN_001d03f4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [48];
  
  func_0x00368944(param_1,param_4,0);
  func_0x00372224(auStack_44,param_2);
  func_0x003713fc(uRam001d04e4,uRam001d04e8,uRam001d04e4,auStack_44,1);
  fStack_54 = (float)VectorUnsignedToFloat(0xff - param_3,(byte)(in_fpscr >> 0x15) & 3);
  fStack_54 = fStack_54 * fRam001d04ec;
  if ((int)fStack_54 < 0x3f800000) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x194) + 0x10);
    fStack_50 = fStack_54;
    fStack_4c = fStack_54;
    fStack_48 = fStack_54;
    func_0x003688a8(iVar2,0,4,&fStack_54);
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xe) = 1;
    func_0x003721e0(*(undefined4 *)(param_1 + 0x194),auStack_44);
    *(undefined1 *)(*(int *)(param_1 + 0x194) + 0xac) = 1;
    func_0x003687a8(*(undefined4 *)(param_1 + 0x194));
    func_0x0036879c();
    uVar1 = func_0x003687a8(*(undefined4 *)(param_1 + 0x194));
    func_0x00368704(*(undefined4 *)(iRam001d04f0 + param_4),uVar1);
    func_0x00372170(*(undefined4 *)(param_1 + 0x194),0);
  }
  return;
}

