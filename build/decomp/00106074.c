// OoT3D decomp @ 00106074  name=FUN_00106074  size=216

void FUN_00106074(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_00106180;
  fVar1 = DAT_00106170;
  fVar4 = *(float *)(param_1 + 0x6c) * DAT_00106168 * DAT_00106174;
  if (*(float *)(param_1 + 0x6c) * DAT_0010616c <= DAT_00106170) {
    fVar4 = fVar4 * DAT_00106178 - DAT_0010617c;
  }
  else {
    fVar4 = DAT_0010617c + fVar4 * DAT_00106178;
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) - (short)(int)fVar4;
  iVar3 = FUN_003705a0(fVar1,uVar2,param_1 + 0x6c);
  if (iVar3 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    FUN_00375bcc(param_1,DAT_00106194);
    FUN_00370170(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x9dc) != DAT_00106184) {
    FUN_00370350(DAT_00106188,param_1 + 0x1a4,2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0xf,3);
}
