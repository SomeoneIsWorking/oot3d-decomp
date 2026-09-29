// OoT3D decomp @ 0011c5a0  name=FUN_0011c5a0  size=528

void FUN_0011c5a0(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;

  iVar5 = *(int *)(DAT_0011c7b0 + param_2);
  FUN_003731e0(param_1 + 0x1d4);
  if (*(short *)(param_1 + 0x59c) != 0) {
    *(short *)(param_1 + 0x59c) = *(short *)(param_1 + 0x59c) + -1;
  }
  iVar4 = FUN_0036f18c(param_1,0x2800);
  if (iVar4 == 0) {
    FUN_00370084(param_1 + 0xbc,0xfffff000,2);
    if (DAT_0011c7b8 < *(int *)(param_1 + 0x98)) goto LAB_0011c66c;
  }
  else {
    local_28 = *(undefined4 *)(iVar5 + 0x28);
    local_24 = *(float *)(iVar5 + 0x2c) + DAT_0011c7b4;
    local_20 = *(undefined4 *)(iVar5 + 0x30);
    iVar4 = FUN_0036e10c(param_1,&local_28);
    if (0x3000 < iVar4) {
      iVar4 = 0x3000;
    }
    FUN_00370084(param_1 + 0xbc,iVar4,2,0x400);
LAB_0011c66c:
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),4,0xc00);
  }
  if ((*(short *)(param_1 + 0x59c) == 0) || (iVar4 = FUN_0036ef98(param_2), iVar4 == 2)) {
    if ((*(byte *)(param_1 + 0x5b4) & 2) == 0) goto LAB_0011c79c;
  }
  else if ((*(byte *)(param_1 + 0x5b4) & 2) == 0) {
    if ((((*(ushort *)(param_1 + 0x90) & 9) == 0) &&
        ((*(uint *)(DAT_0011c7bc + iVar5) & 0x800000) == 0)) &&
       (DAT_0011c7c0 <= *(uint *)(param_1 + 0x88))) {
      return;
    }
    goto LAB_0011c79c;
  }
  FUN_00375bcc(param_1,DAT_0011c7c4);
  bVar1 = *(byte *)(param_1 + 0x5b4);
  *(byte *)(param_1 + 0x5b4) = bVar1 & 0xfd;
  fVar2 = DAT_0011c7c8;
  if ((bVar1 & 4) != 0) {
    FUN_00375c08(DAT_0011c7cc,DAT_0011c7c8,DAT_0011c7c8,DAT_0011c7c8,param_1 + 0x1d4,1,0);
    uVar3 = DAT_0011c7d8;
    fVar6 = *(float *)(param_1 + 0x220);
    if (fVar2 < fVar6) {
      fVar6 = DAT_0011c7d0 + fVar6 * DAT_0011c7d4;
    }
    else {
      fVar6 = fVar6 * DAT_0011c7d4 - DAT_0011c7d0;
    }
    *(short *)(param_1 + 0x59c) = (short)(int)fVar6;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0x614) = 1;
    FUN_00375bcc(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x598) = DAT_0011c7dc;
    return;
  }
LAB_0011c79c:
  *(undefined2 *)(DAT_0036630c + param_1) = 0x96;
  FUN_003731e8(DAT_00366310,param_1 + 0x1d4);
  *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) | 1;
  *(undefined4 *)(param_1 + 0x598) = DAT_00366314;
  return;
}
