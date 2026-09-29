// OoT3D decomp @ 0016604c  name=FUN_0016604c  size=708

void FUN_0016604c(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  uint in_fpscr;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined1 *)(param_1 + 0xc20) = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00166310 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xc1c) = iVar3 + 0x10;
  FUN_00372d4c(DAT_0016631c,DAT_00166314,param_1 + 0xbc,DAT_00166318);
  uVar4 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0xc1c),0);
  FUN_00353e78(*(undefined4 *)(param_1 + 0xc1c),param_2,param_1 + 0x1a4,uVar4,
               *(undefined4 *)(param_1 + 0x178),0xffffffff,param_1 + 0x4cc,param_1 + 0x874,0x12);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x3f8);
  FUN_00353d24(param_2,param_1 + 0x3f8,param_1,DAT_00166320);
  FUN_00350318(param_1 + 0xa0,0,DAT_00166324);
  iVar3 = DAT_00166328;
  sVar2 = *(short *)(param_2 + 0x104);
  if (sVar2 == 0x55) {
    uVar1 = *(ushort *)(DAT_00166328 + 0xeee);
    bVar6 = (uVar1 & 0x1000) == 0;
    if (bVar6) {
      uVar1 = *(ushort *)(DAT_00166328 + 0xef4);
    }
    if (!bVar6 || (uVar1 & 1) != 0) goto LAB_001661a8;
  }
  else if (sVar2 == 0x28) {
    uVar1 = *(ushort *)(DAT_00166328 + 0xeee);
    bVar6 = (uVar1 & 0x1000) == 0;
    if (bVar6) {
      uVar1 = *(ushort *)(DAT_00166328 + 0xef4);
    }
    if ((bVar6 && (uVar1 & 1) == 0) || (*(int *)(DAT_00166328 + 4) == 0)) {
LAB_001661a8:
      FUN_00374428(param_1);
      return;
    }
  }
  else if (sVar2 != 0x5b) goto LAB_001661a8;
  FUN_003717ac(param_1 + 0x1a4,DAT_0016632c,0);
  FUN_0037572c(DAT_00166330,param_1);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(undefined2 *)(param_1 + 0x480) = 0xff;
  FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x18,0,0,0,3);
  sVar2 = *(short *)(param_2 + 0x104);
  uVar4 = DAT_00166344;
  if (sVar2 == 0x55) {
    if (((*(ushort *)(iVar3 + 0xeec) & 0x10) == 0) ||
       ((*(uint *)(iVar3 + 0xbc) & *(uint *)(DAT_00166334 + 0x48)) != 0)) {
LAB_00166264:
      if (*(int *)(iVar3 + 4) == 0) {
        *(float *)(param_1 + 0x43c) = *(float *)(param_1 + 0x43c) * DAT_00166338;
      }
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
      uVar4 = DAT_0016633c;
      goto LAB_00166304;
    }
  }
  else if (sVar2 == 0x5b) {
    if ((*(ushort *)(iVar3 + 0xeec) & 0x400) == 0) goto LAB_00166264;
  }
  else if (sVar2 == 0x28) goto LAB_00166304;
  if ((~(int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0) {
    pbVar5 = (byte *)(*(int *)(DAT_00166340 + param_2) +
                     (((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 5));
    iVar3 = *(int *)(pbVar5 + 4) + (uint)*pbVar5 * 6;
    uVar4 = VectorSignedToFloat((int)*(short *)(iVar3 + -6),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    uVar4 = VectorSignedToFloat((int)*(short *)(iVar3 + -4),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    uVar4 = VectorSignedToFloat((int)*(short *)(iVar3 + -2),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    uVar4 = DAT_00166344;
  }
LAB_00166304:
  *(undefined4 *)(param_1 + 0x3f4) = uVar4;
  return;
}
