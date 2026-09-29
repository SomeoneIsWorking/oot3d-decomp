// OoT3D decomp @ 001746d4  name=FUN_001746d4  size=184

void FUN_001746d4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;

  uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar3 = DAT_00174794;
  uVar2 = DAT_00174790;
  uVar1 = DAT_0017478c;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x654) = uVar4;
  FUN_00375c08(uVar3,uVar2,uVar4,uVar1,param_1 + 0x1a4,1,2);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar1 = DAT_00174798;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined2 *)(param_1 + 0x63e) = 0;
  *(undefined2 *)(param_1 + 0x640) = 0;
  *(undefined2 *)(param_1 + 0x642) = 0x1e;
  iVar5 = FUN_0034c3b8(DAT_0017479c,param_2 + 0xa98,param_1 + 0x668);
  if (iVar5 != 0) {
    *(undefined2 *)(param_1 + 0x63e) = 1;
    *(short *)(param_1 + 0x640) = *(short *)(param_1 + 0xbc) + -0x7f00;
  }
  *(undefined4 *)(param_1 + 0x638) = DAT_001747a0;
  return;
}
