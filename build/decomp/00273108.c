// OoT3D decomp @ 00273108  name=FUN_00273108  size=48

undefined4 FUN_00273108(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = iRam00273138;
  *(undefined4 *)(param_2 + 0xa68) = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)(param_2 + 0xa6c) = *(undefined1 *)(param_3 + 2);
  if (*(int *)(iVar1 + 0x558) == 0xff) {
    FUN_0032c5dc(*(undefined1 *)(param_3 + 1));
  }
  return 1;
}

