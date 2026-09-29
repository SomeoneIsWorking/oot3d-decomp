// OoT3D decomp @ 003f0ef0  name=FUN_003f0ef0  size=796

void FUN_003f0ef0(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;

  iVar8 = DAT_003f1214;
  uVar7 = DAT_003f120c;
  *(undefined1 *)(param_1 + 0x38f) = 0xff;
  fVar2 = DAT_003f1210;
  *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 1;
  iVar11 = param_2 + 0x208c;
  if (*(short *)(param_1 + 0x38c) == 0) {
    FUN_0036c5d8(param_1,&local_38,*(int *)(DAT_003f122c + param_2) + 0x28);
    fVar14 = DAT_003f1230;
    uVar3 = *(ushort *)(param_2 + 0x104);
    if (*(char *)(iVar8 + 0xe) == '\0') {
      bVar12 = uVar3 == 5;
      if (bVar12) {
        uVar3 = (ushort)*(byte *)(DAT_003f1238 + param_2);
      }
      if (((bVar12 && uVar3 == 4) && (iVar8 = FUN_00360084(iVar11,uVar7,1,&local_3c,1), 0 < iVar8))
         && (iVar8 = FUN_00387fd0(local_3c), iVar8 == 0)) {
        fVar14 = local_30 + DAT_003f123c;
      }
    }
    else {
      bVar12 = uVar3 == 4;
      if (bVar12) {
        uVar3 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar12 && uVar3 == 5) {
        fVar14 = DAT_003f1234;
      }
    }
    if (((fVar14 < local_30) && (local_30 < fVar2)) &&
       (((int)ABS(local_34) < DAT_003f1240 &&
        (((int)ABS(local_38) < DAT_003f1240 + 0x800000 &&
         (iVar8 = FUN_0036f2f8(param_1,0x3000,param_2), iVar8 != 0)))))) {
      FUN_00346778(param_1,param_2,-(((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x19));
    }
    iVar8 = FUN_0036bcb4(param_2,*(ushort *)(param_1 + 0x1c) & 0x1f);
    if (iVar8 != 0) {
      *(undefined4 *)(param_1 + 0x24c) = DAT_003f1224;
    }
    return;
  }
  uVar3 = (ushort)*(byte *)(iVar8 + 0xe);
  bVar12 = uVar3 == 1;
  if (bVar12) {
    uVar3 = *(ushort *)(param_2 + 0x104);
  }
  bVar13 = bVar12 && uVar3 == 2;
  if (bVar12 && uVar3 == 2) {
    bVar13 = *(char *)(param_1 + 3) == '\x0e';
  }
  if ((bVar13) && (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x1c != 5)) {
    iVar4 = FUN_0033de14(0x10);
    iVar5 = FUN_00360084(iVar11,uVar7,1,iVar4,4);
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar9 = *(int *)(iVar4 + iVar6 * 4);
        if ((*(int *)(iVar9 + 0x1fc) != 0) && (*(uint *)(iVar9 + 0x1c4) <= DAT_003f1218)) {
          *(undefined2 *)(param_1 + 0x38c) = 0;
          FUN_0033ddd4(iVar4);
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    FUN_0033ddd4(iVar4);
  }
  uVar10 = *(undefined4 *)
            (DAT_003f121c +
            (*(int *)(iVar8 + 4) + ((int)*(short *)(param_1 + 0x38c) >> 0x1f) * -2) * 4);
  uVar7 = FUN_003603c0(param_1 + 0x1bc,uVar10);
  uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003f1220,fVar2,uVar7,fVar2,param_1 + 0x1bc,uVar10,2);
  *(undefined4 *)(param_1 + 0x24c) = DAT_003f1224;
  if ((0 < *(short *)(param_1 + 0x38c)) &&
     (cVar1 = *(char *)(param_1 + 0x391),
     (((cVar1 != '\x05' && cVar1 != '\x06') && cVar1 != '\a') && cVar1 != '\b') && cVar1 != '\r')) {
    local_38 = (float)(int)*(short *)(param_1 + 0xc0);
    local_3c = (int)*(short *)(param_1 + 0xbe);
    local_34 = -NAN;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),iVar11,param_1,param_2,0xaa,
                 (int)*(short *)(param_1 + 0xbc));
    FUN_0035c528(DAT_003f1228);
  }
  FUN_0034bf44(param_2,*(ushort *)(param_1 + 0x1c) & 0x1f);
  return;
}
