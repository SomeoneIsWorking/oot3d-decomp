// OoT3D decomp @ 0022d7a4  name=FUN_0022d7a4  size=416

void FUN_0022d7a4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_003510b0(param_1,DAT_0022d944);
  uVar4 = DAT_0022d950;
  FUN_00372d4c(DAT_0022d950,DAT_0022d948,param_1 + 0xbc,DAT_0022d94c);
  FUN_00372f38(param_1,param_2,param_1 + 0x418,1,param_1 + 0x41c,2,param_1 + 0x420,3,param_1 + 0x428
               ,4,param_1 + 0x424,5,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x22c,param_1 + 0x2c8,3);
  FUN_00353dd0(param_2,param_1 + 0x3c0);
  FUN_00353d24(param_2,param_1 + 0x3c0,param_1,DAT_0022d954);
  FUN_0037632c(param_1,param_1 + 0x3c0);
  FUN_00353dd0(param_2,param_1 + 0x368);
  FUN_00353d24(param_2,param_1 + 0x368,param_1,DAT_0022d958);
  FUN_0037632c(param_1,param_1 + 0x368);
  uVar3 = FUN_0035011c(1);
  FUN_00350d20(param_1 + 0xa0,uVar3,DAT_0022d95c);
  *(undefined4 *)(param_1 + 0x364) = 0;
  fVar2 = DAT_0022d964;
  uVar1 = (undefined2)DAT_0022d960;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0037572c(uVar4,param_1);
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
    uVar4 = DAT_0022d968;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar2;
  }
  else {
    FUN_0037572c(DAT_0022d96c,param_1);
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
    uVar4 = DAT_0022d970;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar2;
  }
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  return;
}
