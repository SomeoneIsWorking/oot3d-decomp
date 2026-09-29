// OoT3D decomp @ 0039a0f8  name=FUN_0039a0f8  size=304

void FUN_0039a0f8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [4];
  short local_14;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_0031cb28(param_1);
  iVar1 = DAT_0039a228;
  FUN_00375a18(param_1 + 0xfea,0,1,DAT_0039a228,0);
  FUN_00375a18(param_1 + 0xfe8,0,1,iVar1,0);
  FUN_00375a18(param_1 + 0xff0,0,1,iVar1,0);
  FUN_00375a18(param_1 + 0xfee,0,1,iVar1,0);
  FUN_00375a18(param_1 + 0xff6,(int)(short)(*(short *)(param_1 + 0xbe) + -0x4000),1,iVar1 + 4000,0);
  FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x9c,auStack_18,0);
  FUN_00375a18(param_1 + 0xff4,(int)(short)(local_14 + -5000),1,iVar1,0);
  if (*(float *)(*(int *)(param_1 + 0x124) + 0x6c) == DAT_0039a22c) {
    FUN_0031b034(param_1,param_2);
  }
  return;
}
