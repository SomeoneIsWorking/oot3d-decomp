// OoT3D decomp @ 00274900  name=FUN_00274900  size=428

void FUN_00274900(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;

  iVar5 = *(int *)(DAT_00274aac + param_2);
  *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
  if ((*(short *)(param_1 + 0x1aa) == 6) && (*(char *)(DAT_00274ab0 + 0x2dd) == '\0')) {
    return;
  }
  if ((-1 < *(short *)(param_1 + 0x1ac)) && (iVar4 = FUN_0036e864(param_2), iVar4 != 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  sVar1 = *(short *)(param_1 + 0x1a8);
  if (sVar1 == 4) {
    uVar2 = *(ushort *)(DAT_00274ab4 + 0xf4) & 0x800;
joined_r0x00274998:
    if (uVar2 != 0) {
      return;
    }
  }
  else if (sVar1 == 6) {
    uVar2 = *(ushort *)(DAT_00274ab4 + 0xee) & 0x2000;
    goto joined_r0x00274998;
  }
  if (*(float *)(param_1 + 0x1b4) + DAT_00274ab8 <= *(float *)(param_1 + 0x98)) {
    return;
  }
  fVar6 = ABS(*(float *)(iVar5 + 0x2c) - *(float *)(param_1 + 0x2c));
  if (DAT_00274abc <= (int)fVar6) {
    return;
  }
  if ((*(uint *)(iVar5 + 0x1714) & 0x1000000) == 0) {
    if (*(float *)(param_1 + 0x1b4) + DAT_00274ac4 <= *(float *)(param_1 + 0x98)) {
      return;
    }
    if (DAT_00274ac8 <= (int)fVar6) {
      return;
    }
    *(undefined2 *)(param_1 + 0x1b2) = 0;
    *(uint *)(iVar5 + 0x1714) = *(uint *)(iVar5 + 0x1714) | 0x800000;
    return;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      FUN_0037073c(param_2,0x27);
      goto LAB_00274a58;
    }
    if (sVar1 == 4) {
      FUN_0037073c(param_2,0x26);
      goto LAB_00274a58;
    }
    if (sVar1 != 6) {
      FUN_00374428(param_1);
      goto LAB_00274a58;
    }
  }
  FUN_0037073c(param_2,0x24);
LAB_00274a58:
  uVar3 = DAT_00274ac0;
  *(uint *)(iVar5 + 0x1714) = *(uint *)(iVar5 + 0x1714) | 0x800000;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}
