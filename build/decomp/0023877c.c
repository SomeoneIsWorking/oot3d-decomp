// OoT3D decomp @ 0023877c  name=FUN_0023877c  size=304

void FUN_0023877c(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = DAT_002388ac;
  fVar5 = (float)FUN_00338f60((int)*(short *)(*(int *)(DAT_002388ac + 0x30) + 0xbe));
  uVar4 = DAT_002388b8;
  uVar3 = DAT_002388b4;
  fVar2 = DAT_002388b0;
  FUN_00373500(*(float *)(param_1 + 0x10) + fVar5 * DAT_002388b0,DAT_002388b8,DAT_002388b4,
               param_1 + 0x30);
  fVar5 = (float)FUN_002cfca0((int)*(short *)(*(int *)(iVar1 + 0x30) + 0xbe));
  FUN_00373500(*(float *)(param_1 + 8) + fVar5 * fVar2,uVar4,uVar3,param_1 + 0x28);
  if (*(char *)(param_1 + 0x231) != '\0') {
    FUN_003705a0(*(undefined4 *)(param_1 + 0x84),DAT_002388c4,param_1 + 0x2c);
    return;
  }
  FUN_00370378(param_1 + 0x23c,0,0x800);
  FUN_00372aa8(param_1 + 0x23a,0xfffff254);
  FUN_00370378(param_1 + 0xbc,(int)*(short *)(param_1 + 0x14),0x800);
  FUN_00370378(param_1 + 0xc0,(int)*(short *)(param_1 + 0x18),0x800);
  FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x16),0x800);
  if (*(int *)(*(int *)(iVar1 + 0x30) + 0x22c) == DAT_002388bc) {
    *(undefined1 *)(param_1 + 0x231) = 1;
    FUN_00374a58(DAT_002388c0,param_1 + 0x1a4,
                 *(undefined4 *)(iVar1 + 0x74 + *(short *)(param_1 + 0x1c) * 4));
    return;
  }
  return;
}
