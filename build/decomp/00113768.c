// OoT3D decomp @ 00113768  name=FUN_00113768  size=404

void FUN_00113768(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;

  uVar2 = DAT_00113900;
  uVar6 = DAT_001138fc;
  cVar1 = *(char *)(param_1 + 0x7df);
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = *(char *)(param_1 + 0x80b);
  }
  bVar9 = bVar8 && cVar1 == '\0';
  if (bVar8 && cVar1 == '\0') {
    bVar9 = *(char *)(param_1 + 0x837) == '\0';
  }
  bVar8 = false;
  if (bVar9) {
    bVar8 = *(char *)(param_1 + 0x863) == '\0';
  }
  if (bVar8) {
    if (*(short *)(param_1 + 0x7d4) == 0) {
      uVar5 = FUN_0036ae14(param_1 + 0x1bc,1);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar6,uVar5,uVar6,param_1 + 0x1bc,1,2);
      uVar6 = DAT_00113918;
      goto LAB_001138ac;
    }
    *(short *)(param_1 + 0x7d4) = *(short *)(param_1 + 0x7d4) + -1;
  }
  iVar7 = *(int *)(DAT_00113904 + param_2);
  iVar4 = FUN_0036bc98(param_1,param_2);
  if (iVar4 == 0) {
    if (DAT_00113934 <= *(int *)(param_1 + 0x98)) {
      return;
    }
    FUN_0036bbd0(DAT_00113938,param_1,param_2,0x1b);
    return;
  }
  iVar4 = FUN_0036bc84(param_2);
  if (*(int *)(param_1 + 0x650) != DAT_00113908) {
    uVar5 = FUN_0036ae14(param_1 + 0x1bc,0);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar6,uVar5,uVar6,param_1 + 0x1bc,0);
  }
  if (iVar4 == 0) {
    if ((*(ushort *)(DAT_0011391c + 0x26) & 0x40) == 0) {
      uVar3 = (undefined2)DAT_00113920;
    }
    else {
      uVar3 = (undefined2)DAT_00113924;
    }
    *(undefined2 *)(param_1 + 2000) = uVar3;
    uVar6 = DAT_00113928;
  }
  else if (iVar4 == 0x1b) {
    *(short *)(DAT_00113910 + iVar7) = (short)DAT_0011392c;
    uVar6 = DAT_00113930;
  }
  else {
    if (iVar4 != 0x1c) {
      return;
    }
    *(short *)(DAT_00113910 + iVar7) = (short)DAT_0011390c;
    uVar6 = DAT_00113914;
  }
LAB_001138ac:
  *(undefined4 *)(param_1 + 0x650) = uVar6;
  return;
}
