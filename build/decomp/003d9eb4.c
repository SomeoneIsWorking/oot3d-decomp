// OoT3D decomp @ 003d9eb4  name=FUN_003d9eb4  size=160

void FUN_003d9eb4(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;

  iVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),DAT_003d9f54,param_1 + 0x2c);
  if (iVar3 == 0) {
    FUN_00373264(param_1,DAT_003d9f60);
    iVar3 = extraout_r1;
  }
  else {
    FUN_00375bcc(param_1,DAT_003d9f58);
    iVar3 = 0x1c0;
    *(undefined2 *)(param_1 + 0x1c0) = 0x3c;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003d9f5c;
  }
  fVar1 = DAT_003d9f64;
  iVar4 = *(int *)(param_1 + 0x128);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x13c);
  }
  if (iVar4 != 0 && iVar3 != 0) {
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    fVar2 = DAT_003d9f68;
    *(float *)(*(int *)(param_1 + 0x128) + 0x2c) = *(float *)(param_1 + 0x2c) + fVar1;
    *(float *)(*(int *)(param_1 + 0x128) + 0x30) = *(float *)(param_1 + 0x30) + fVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}
