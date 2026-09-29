// OoT3D decomp @ 0026dd2c  name=FUN_0026dd2c  size=364

void FUN_0026dd2c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  iVar3 = DAT_0026dea4;
  uVar2 = DAT_0026dea0;
  uVar1 = DAT_0026de9c;
  uVar5 = DAT_0026de98;
  if ((*(byte *)(param_1 + 0x1bd) & 2) == 0) {
    if (*(char *)(DAT_0026dea8 + param_2) == '\0') goto LAB_0026ddb0;
  }
  else {
    *(byte *)(param_1 + 0x1bd) = *(byte *)(param_1 + 0x1bd) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x1c4,1);
  }
  FUN_00374a58(uVar5,param_1 + 0x204,*(undefined4 *)(iVar3 + 8));
  FUN_00375bcc(param_1,uVar1);
  *(byte *)(param_1 + 0x1bd) = *(byte *)(param_1 + 0x1bd) & 0xfe;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
LAB_0026ddb0:
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  fVar4 = DAT_0026deac;
  FUN_00376340(DAT_0026deac,*(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0),
               param_2,param_1,4);
  if ((*(byte *)(param_1 + 0x1bd) & 1) != 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
  if (*(int *)(param_1 + 0x1a4) != DAT_0026deb0) {
    if (*(int *)(param_1 + 0x1a4) == DAT_0026deb4) {
      fVar6 = *(float *)(param_1 + 0x240);
      uVar5 = FUN_0036ae14(param_1 + 0x204,*(undefined4 *)(iVar3 + 4));
      fVar7 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0037322c(fVar4 - (fVar6 * fVar4) / fVar7,param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + fVar4;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x38);
    return;
  }
  FUN_0037322c(*(undefined4 *)(param_1 + 0x240),param_1);
  return;
}
