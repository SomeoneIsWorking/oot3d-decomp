// OoT3D decomp @ 00380604  name=FUN_00380604  size=200

void FUN_00380604(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;

  sVar1 = FUN_00367358(param_1,DAT_003806cc + *(short *)(param_1 + 0xa6e) * 0xc,param_3,param_4,
                       param_4);
  FUN_00375a18(param_1 + 0x36,(int)(short)(sVar1 + -0x8000),1,1000,0);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 != 0) {
    *(short *)(param_1 + 0x36) = sVar1;
    *(undefined4 *)(param_1 + 0xa50) = 0;
    FUN_00373d40(param_1 + 0x1a4,*DAT_003806d0);
    *(undefined4 *)(param_1 + 0xa48) = 0x13;
    uVar4 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
    *(short *)(param_1 + 0xa6a) = (short)uVar4;
    uVar2 = FUN_00373d98(param_1 + 0x28,uVar4,(int)*(short *)(param_1 + 0xa6c),param_2);
    *(undefined2 *)(param_1 + 0xa6e) = uVar2;
    *(undefined4 *)(param_1 + 0xa54) = DAT_003806d4;
    *(undefined2 *)(param_1 + 0xa66) = 1;
  }
  return;
}
