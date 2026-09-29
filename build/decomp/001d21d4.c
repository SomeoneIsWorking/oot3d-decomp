// OoT3D decomp @ 001d21d4  name=FUN_001d21d4  size=988

void FUN_001d21d4(int param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  ushort *puVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 uVar13;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  float local_28;
  float local_24;

  FUN_003731e0(param_1 + 0x1a4);
  uVar3 = DAT_001d2450;
  sVar2 = *(short *)(param_1 + 0x1c);
  iVar4 = param_1 + 0x1a4;
  if (sVar2 == 0) {
    iVar4 = FUN_0036e5e0(DAT_001d2474,DAT_001d2450,iVar4);
    if (iVar4 != 0) {
      FUN_0037547c(DAT_001d2478,param_1 + 0x28,4,DAT_001d245c,DAT_001d245c,DAT_001d2458);
    }
  }
  else {
    if (sVar2 == 1) {
      iVar4 = FUN_0036e5e0(DAT_001d247c,DAT_001d2450,iVar4);
      uVar13 = DAT_001d2480;
    }
    else {
      if (sVar2 != 2) goto LAB_001d2248;
      iVar4 = FUN_0036e5e0(DAT_001d2454,DAT_001d2450,iVar4);
      uVar13 = DAT_001d2460;
    }
    if (iVar4 != 0) {
      FUN_0037547c(uVar13,param_1 + 0x28,4,DAT_001d245c,DAT_001d245c,DAT_001d2458);
    }
  }
LAB_001d2248:
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(uVar3,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_001d2468,DAT_001d2464,DAT_001d2464,param_2,param_1,5);
  if (*(short *)(param_1 + 0x1c) == 0) {
    iVar4 = 5;
  }
  else if (*(short *)(param_1 + 0x1c) == 1) {
    iVar4 = 6;
  }
  else {
    iVar4 = 7;
  }
  iVar11 = param_2 + 0x2298;
  iVar5 = FUN_0037571c(param_2);
  iVar7 = DAT_001d2470;
  psVar6 = (short *)0x0;
  if (iVar5 != 0) {
    psVar6 = *(short **)(iVar11 + iVar4 * 4 + 0x44);
  }
  if ((psVar6 != (short *)0x0) && (*psVar6 == 5)) {
    bVar12 = iVar4 == 5;
    if (bVar12) {
      iVar4 = 0;
      iVar11 = 4;
    }
    local_30 = (ulonglong)DAT_001d246c;
    local_38 = DAT_001d246c;
    local_34 = DAT_001d246c;
    if (!bVar12) {
      if (iVar4 == 7) {
        iVar4 = 4;
        iVar11 = 8;
      }
      else {
        iVar4 = 8;
        iVar11 = 0xb;
      }
    }
    for (; iVar4 < iVar11; iVar4 = iVar4 + 1) {
      pfVar9 = (float *)(iVar7 + iVar4 * 0xc);
      local_30 = CONCAT44(*(float *)(param_1 + 0x28) + *pfVar9,(undefined4)local_30);
      local_28 = *(float *)(param_1 + 0x2c) + pfVar9[1];
      local_24 = *(float *)(param_1 + 0x30) + pfVar9[2];
      FUN_003642f4(param_2,(int)&local_30 + 4,&local_38,&local_38,10,7,0xff,0xff,0xff,0xff,0,0,0xff,
                   1,0xb,1);
    }
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    iVar4 = 5;
  }
  else if (*(short *)(param_1 + 0x1c) == 1) {
    iVar4 = 6;
  }
  else {
    iVar4 = 7;
  }
  iVar7 = FUN_0037571c(param_2);
  uVar3 = DAT_0033e0dc;
  puVar8 = (ushort *)0x0;
  if (iVar7 != 0) {
    puVar8 = *(ushort **)(param_2 + 0x2298 + iVar4 * 4 + 0x44);
  }
  if ((puVar8 != (ushort *)0x0) && (uVar10 = (uint)*puVar8, uVar10 != *(uint *)(param_1 + 0x304))) {
    switch(uVar10) {
    case 1:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(undefined4 *)(param_1 + 0x300) = 0;
      *(undefined1 *)(param_1 + 0xd0) = 0;
      break;
    case 2:
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfe;
      if (*(short *)(param_1 + 0x1c) == 0) {
        iVar4 = 5;
      }
      else if (*(short *)(param_1 + 0x1c) == 1) {
        iVar4 = 6;
      }
      else {
        iVar4 = 7;
      }
      iVar5 = FUN_0037571c(param_2);
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = *(int *)(param_2 + 0x2298 + iVar4 * 4 + 0x44);
      }
      if (iVar7 != 0) {
        uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar13;
        uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar13;
        uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar13;
        uVar1 = *(undefined2 *)(iVar7 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      *(undefined4 *)(param_1 + 0x2fc) = 1;
      *(undefined4 *)(param_1 + 0x300) = 1;
      *(undefined4 *)(param_1 + 0x1e0) = uVar3;
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x2fc) = 2;
      *(undefined4 *)(param_1 + 0x300) = 1;
      *(undefined4 *)(param_1 + 0x1e0) = uVar3;
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
      break;
    case 4:
      FUN_00374428(param_1);
    }
    *(uint *)(param_1 + 0x304) = uVar10;
  }
  return;
}
