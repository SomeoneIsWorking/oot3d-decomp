// OoT3D decomp @ 0042c0a4  name=FUN_0042c0a4  size=1372

void FUN_0042c0a4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_e4 [176];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  iVar7 = DAT_0042c4ac;
  cVar1 = *(char *)(param_1 + 0x100);
  bVar10 = cVar1 != '\x03';
  if (!bVar10) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if (bVar10 || cVar1 != '\x02') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(DAT_0042c4a8 + 0x4e4) == 1) {
    return;
  }
  if (*(int *)(DAT_0042c4ac + 0x20) == 0) {
    iVar3 = FUN_00313ce0(0x38);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f2448(iVar3,2,6);
    }
    *(undefined4 *)(iVar7 + 0x20) = uVar4;
  }
  if (*(int *)(iVar7 + 0x28) == 0) {
    iVar3 = FUN_00313ce0(0x38);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002f2448(iVar3,4,1);
    }
    *(undefined4 *)(iVar7 + 0x28) = uVar4;
  }
  if (*(int *)(iVar7 + 0x60) != 0) {
    FUN_002f233c();
    *(undefined4 *)(iVar7 + 0x60) = 0;
    return;
  }
  if (*(int *)(iVar7 + 0x50) != 0) {
    if (*(int *)(iVar7 + 0x58) == 1) {
      FUN_00441a88((int)*(short *)(param_1 + 0x104),*(undefined4 *)(iVar7 + 0x40));
    }
    else {
      if ((int)*(float *)(iVar7 + 0x5c) < 0x3f800000) {
        fVar11 = *(float *)(iVar7 + 0x5c) + DAT_0042c4b0;
        *(float *)(iVar7 + 0x5c) = fVar11;
        if (0x3f800000 < (int)fVar11) {
          *(undefined4 *)(iVar7 + 0x5c) = DAT_0042c4b4;
        }
      }
      local_28 = *(undefined4 *)(iVar7 + 0x5c);
      if (*(int *)(iVar7 + 4) != 0) {
        FUN_002fcdec(*(undefined4 *)(iVar7 + 0x18),&local_28,1,0);
      }
    }
  }
  *(undefined4 *)(iVar7 + 0x50) = 0;
  piVar2 = DAT_0042c4bc;
  iVar3 = DAT_0042c4b8;
  uVar9 = (uint)*(short *)(param_1 + 0x104);
  if (uVar9 == 0x52) {
LAB_0042c364:
    uVar8 = uVar9;
    if (uVar9 == 0x53) {
      if ((*(uint *)(DAT_0042c4c4 + 0x28) & *(uint *)(DAT_0042c4b8 + 0xbc)) != 0) {
        uVar8 = 0x65;
      }
    }
    else if (uVar9 == 0x57) {
      if ((*(int *)(DAT_0042c4b8 + 4) == 0) &&
         ((*(uint *)(DAT_0042c4c4 + 8) & *(uint *)(DAT_0042c4b8 + 0xbc)) == 0)) {
        uVar8 = 0x66;
      }
    }
    else if (uVar9 == 0x5a) {
      if ((*(int *)(DAT_0042c4b8 + 4) == 0) && ((~*(ushort *)(DAT_0042c4c8 + 0xfe) & 0xf) != 0)) {
        uVar8 = 0x67;
      }
    }
    else {
      uVar5 = DAT_0042c4c8;
      if (uVar9 == 0x5d) {
        uVar5 = (uint)*(ushort *)(DAT_0042c4c8 + 0xfe);
      }
      if (uVar9 == 0x5d && (~uVar5 & 0xf) == 0) {
        uVar8 = 0x68;
      }
    }
    if (uVar9 != *(uint *)(iVar7 + 0x30)) {
      FUN_004416c4(uVar8 - 0x51);
      *(int *)(iVar7 + 0x30) = (int)*(short *)(param_1 + 0x104);
    }
    FUN_00371738(auStack_e4,DAT_0042c4cc,0xc0);
    FUN_002f9430(*(undefined4 *)(iVar7 + 0x18),auStack_e4 + (uVar8 - 0x51) * 8,1,0);
    *(undefined4 *)(iVar7 + 0x38) = 0;
LAB_0042c5fc:
    bVar10 = *(int *)(iVar7 + 0x14) != 0;
    iVar6 = 0;
    if (bVar10) {
      iVar6 = *(int *)(iVar7 + 0x1c);
    }
    if (!bVar10 || iVar6 == 0) {
      return;
    }
    local_2c = *(undefined4 *)(DAT_0042c668 + 4);
    local_28 = *(undefined4 *)(DAT_0042c668 + 8);
    local_30 = *(undefined4 *)(DAT_0042c668 + 0x10);
    local_34 = *(undefined4 *)(DAT_0042c668 + 0xc);
    if (*(char *)(iVar3 + 0xe) == '\x01') {
      local_2c = DAT_0042c66c;
      local_34 = DAT_0042c670;
    }
    FUN_002fc534(iVar6,&local_2c,&local_34,1,0);
    return;
  }
  if (0x52 < (int)uVar9) {
    if (0x11 < uVar9 - 0x53) goto LAB_0042c5ec;
    goto LAB_0042c364;
  }
  if (uVar9 == 9) {
LAB_0042c21c:
    uVar5 = (uint)*(short *)(param_1 + 0x2e3c);
    uVar8 = *(uint *)(iVar7 + 0x40);
    bVar10 = uVar5 == uVar8;
    if (bVar10) {
      uVar8 = *(uint *)(iVar7 + 0x30);
    }
    if (!bVar10 || uVar9 != uVar8) {
      cVar1 = *(char *)(DAT_0042c4c0 + param_1);
      *(uint *)(iVar7 + 0x40) = uVar5;
      *(int *)(iVar7 + 0x3c) = (int)cVar1;
      iVar6 = FUN_002fcdd4();
      if (iVar6 == 0) {
        if (*(int *)(iVar7 + 100) != 0) {
          FUN_0031b9c0(*(int *)(iVar7 + 100),1);
          FUN_00303ea8(*(undefined4 *)(iVar7 + 100));
          FUN_0034fc6c();
          FUN_0031b99c(*(undefined4 *)(iVar7 + 100));
          *(undefined4 *)(iVar7 + 100) = 0;
        }
        *(undefined4 *)(iVar7 + 0x58) = 1;
        *(undefined4 *)(iVar7 + 0x60) = 1;
      }
    }
    if ((int)*(short *)(param_1 + 0x104) != *(int *)(iVar7 + 0x30)) {
      FUN_002f1d78();
      *(int *)(iVar7 + 0x30) = (int)*(short *)(param_1 + 0x104);
    }
    iVar6 = FUN_002fcdd4();
    if (iVar6 == 0) {
      *(undefined4 *)(iVar7 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x44) = 1;
    }
    iVar6 = FUN_002fcdd4();
    if (iVar6 == 0) {
      *(int *)(iVar7 + 0x38) = (int)*(short *)(*piVar2 + 0xf50);
    }
    *(undefined4 *)(iVar7 + 0x50) = 1;
    FUN_002f1a74(0);
    FUN_002f1444(param_1,(int)*(short *)(param_1 + 0x104),0);
    goto LAB_0042c5fc;
  }
  if ((int)uVar9 < 10) {
    if (8 < uVar9) goto LAB_0042c5ec;
    goto LAB_0042c21c;
  }
  if (uVar9 != 0x15) {
    if ((int)uVar9 < 0x16) {
      if (((uVar9 != 0x11 && uVar9 != 0x12) && uVar9 != 0x13) && uVar9 != 0x14) {
LAB_0042c5ec:
        if (uVar9 != *(uint *)(iVar7 + 0x30)) {
          *(undefined4 *)(iVar7 + 0x60) = 1;
          *(uint *)(iVar7 + 0x30) = uVar9;
        }
        goto LAB_0042c5fc;
      }
    }
    else if ((uVar9 != 0x16 && uVar9 != 0x17) && uVar9 != 0x18) {
      if (uVar9 == 0x51) goto LAB_0042c364;
      goto LAB_0042c5ec;
    }
  }
  *(undefined4 *)(iVar7 + 0x60) = 1;
  uVar5 = (uint)*(short *)(param_1 + 0x2e3c);
  uVar8 = *(uint *)(iVar7 + 0x40);
  bVar10 = uVar5 == uVar8;
  if (bVar10) {
    uVar8 = *(uint *)(iVar7 + 0x30);
  }
  if (!bVar10 || uVar9 != uVar8) {
    *(uint *)(iVar7 + 0x40) = uVar5;
  }
  if (uVar9 == *(uint *)(iVar7 + 0x30)) goto code_r0x0042c524;
  switch(uVar9) {
  case 0x11:
    uVar4 = 0;
    break;
  case 0x12:
    uVar4 = 1;
    break;
  case 0x13:
    uVar4 = 2;
    break;
  case 0x14:
    uVar4 = 3;
    break;
  case 0x15:
    uVar4 = 4;
    break;
  case 0x16:
    uVar4 = 5;
    break;
  case 0x17:
    uVar4 = 6;
    break;
  case 0x18:
    uVar4 = 7;
    break;
  default:
    goto switchD_0042c480_default;
  }
  FUN_002f1d78(uVar4);
switchD_0042c480_default:
  *(int *)(iVar7 + 0x30) = (int)*(short *)(param_1 + 0x104);
  *(undefined4 *)(iVar7 + 0x48) = 0;
  *(undefined4 *)(iVar7 + 0x4c) = 0;
code_r0x0042c524:
  iVar6 = FUN_002fcdd4();
  if (iVar6 == 0) {
    *(int *)(iVar7 + 0x38) = (int)*(short *)(*piVar2 + 0xf50);
  }
  *(undefined4 *)(iVar7 + 0x50) = 1;
  FUN_002f1a74(0);
  switch(*(undefined2 *)(param_1 + 0x104)) {
  case 0x11:
    iVar3 = 0;
    break;
  case 0x12:
    iVar3 = 1;
    break;
  case 0x13:
    iVar3 = 2;
    break;
  case 0x14:
    iVar3 = 3;
    break;
  case 0x15:
    iVar3 = 4;
    break;
  case 0x16:
    iVar3 = 5;
    break;
  case 0x17:
    iVar3 = 6;
    break;
  case 0x18:
    iVar3 = 7;
  }
  iVar7 = FUN_0035b164();
  if (iVar7 == 1) {
    return;
  }
  FUN_002f1444(param_1,iVar3,1);
  return;
}
