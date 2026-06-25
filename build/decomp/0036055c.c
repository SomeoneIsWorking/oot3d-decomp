// OoT3D decomp @ 0036055c  name=FUN_0036055c  size=1052

undefined4 FUN_0036055c(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  
  iVar3 = DAT_00360980;
  iVar6 = DAT_0036097c;
  iVar4 = *(int *)(param_2 + 0x1708);
  if (iVar4 == param_3) {
    return 0;
  }
  if (iVar4 == DAT_00360978) {
    FUN_003523dc(0);
    *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) & 0xfcffffff;
    uVar7 = extraout_r1;
    if ((*DAT_00360984 & 1) == 0) {
      uVar10 = FUN_003679b4(DAT_00360984);
      uVar7 = (int)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 != 0) {
        FUN_0036788c(DAT_00360988);
        uVar7 = DAT_00360990;
      }
    }
    FUN_00306f68(DAT_00360994,uVar7);
    FUN_002ded60();
  }
  else if (iVar4 == DAT_00360998) {
    FUN_00355264(param_1,param_2);
  }
  else if (iVar4 == DAT_0036099c || iVar4 == DAT_00360980) {
    *(undefined4 *)(param_1 + 0x19c) = DAT_003609a0;
    iVar4 = FUN_0036c5bc(param_1,0);
    if (iVar4 != 0) {
      FUN_00367c48();
    }
    FUN_002ded60();
  }
  else if (iVar4 == DAT_003609a4) {
    FUN_0034bbfc(param_2);
  }
  else if (iVar4 == DAT_003609a8 || iVar4 == DAT_0036097c) {
    *(undefined *)(DAT_003609ac + param_1) = 1;
  }
  else if (iVar4 == DAT_003609b0) {
    *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) & 0xffdfffff;
  }
  else if (iVar4 == DAT_003609b4) {
    iVar5 = *(int *)(param_2 + 0x1224);
    bVar9 = iVar5 != 0;
    iVar4 = DAT_003609b4;
    if (bVar9) {
      iVar5 = *(int *)(param_2 + 0x2210);
      iVar4 = DAT_003609b8;
    }
    if (bVar9 && iVar5 != iVar4) {
      FUN_0035d27c(param_2,DAT_003609b8,param_3,param_4,param_4);
      FUN_00359aa0(param_2 + 0x1764,param_1,0xd5);
    }
  }
  iVar4 = DAT_003609bc;
  iVar5 = *(int *)(param_2 + 0x1708);
  if (((iVar5 == iVar6) && (param_3 != DAT_003609bc)) || (iVar5 == DAT_003609bc)) {
    *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) & 0xff7fffff;
  }
  if (iVar5 == iVar4) {
    *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfe;
  }
  iVar6 = DAT_003609c0;
  if (param_3 == DAT_0036099c || param_3 == iVar3) {
    *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) & 0xfffffffe;
    iVar4 = DAT_003609c4;
    if (*(int *)(iVar6 + 4) != 0) {
      cVar1 = *(char *)(param_2 + 0x1b5);
      bVar9 = cVar1 != '\v';
      if (bVar9) {
        cVar1 = *(char *)(param_2 + 0x1b4);
      }
      if ((bVar9 && cVar1 != '\x06') && param_3 != iVar3) {
        if (*(char *)(param_2 + 0x1ac) == '\x06') {
          *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(DAT_003609c4 + 0x74);
          iVar6 = FUN_0036c5bc(param_1,0);
          if (iVar6 != 0) {
            FUN_00367c54();
            FUN_00367c60(*(undefined4 *)(iVar4 + 0x70),iVar6);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(DAT_003609c4 + 0x6c);
        iVar6 = FUN_0036c5bc(param_1,0);
        if (iVar6 != 0) {
          FUN_00367c54();
          FUN_00367c60(*(undefined4 *)(iVar4 + 0x68),iVar6);
        }
      }
    }
  }
  else if (param_3 == DAT_003609c8) {
    *(undefined *)(param_2 + 0x228a) = 0;
  }
  iVar6 = DAT_003609cc;
  *(int *)(param_2 + 0x1708) = param_3;
  bVar9 = param_3 != iVar6;
  if (bVar9) {
    iVar6 = DAT_003609d0;
  }
  bVar2 = param_3 != iVar6;
  if (bVar9 && bVar2) {
    iVar6 = DAT_003609d4;
  }
  iVar3 = iVar6;
  if ((bVar9 && bVar2) && param_3 != iVar6) {
    iVar3 = DAT_003609d8;
  }
  if (((bVar9 && bVar2) && param_3 != iVar6) && param_3 != iVar3) {
    bVar9 = param_3 != DAT_003609dc;
    iVar6 = DAT_003609dc;
    if (bVar9) {
      iVar6 = DAT_003609e0;
    }
    bVar2 = param_3 != iVar6;
    if (bVar9 && bVar2) {
      iVar6 = DAT_003609e4;
    }
    iVar3 = iVar6;
    if ((bVar9 && bVar2) && param_3 != iVar6) {
      iVar3 = DAT_003609e8;
    }
    if ((((bVar9 && bVar2) && param_3 != iVar6) && param_3 != iVar3) &&
       ((uint)*(byte *)(param_2 + 0x1b8) != (int)*(char *)(param_2 + 0x1a7))) {
      *(undefined *)(param_2 + 0x1b8) = *(undefined *)(param_2 + 0x1a7);
      *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) & 0xfffffffb;
    }
  }
  if (*(char *)(param_2 + 0x1ac) != *(char *)(param_2 + 0x1a9)) {
    bVar9 = (param_4 & 1) == 0;
    if (!bVar9) {
      bVar9 = (*(uint *)(param_2 + 0x1710) & 0x400000) == 0;
    }
    if (!bVar9) goto LAB_003608fc;
    FUN_0034c998(param_2);
  }
  bVar9 = (param_4 & 1) == 0;
  if (bVar9) {
    bVar9 = (*(uint *)(param_2 + 0x1710) & 0x800) == 0;
  }
  if (bVar9) {
    FUN_0036aef0(param_1,param_2);
    *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xffbfffff;
  }
LAB_003608fc:
  FUN_00334c44(param_2);
  iVar6 = DAT_003609ec;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0x4bffffbb;
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) & 0xe7f7ffff;
  *(byte *)(param_2 + 0x172a) = *(byte *)(param_2 + 0x172a) & 0x75;
  *(undefined *)(param_2 + 0x2237) = 0;
  *(undefined2 *)(iVar6 + param_2) = 0;
  piVar8 = DAT_003609f0;
  iVar6 = 0;
  *(undefined *)(param_2 + 0x1748) = 0;
  do {
    FUN_0048961c(*piVar8 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
    iVar6 = iVar6 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar6 < 4);
  return 1;
}

