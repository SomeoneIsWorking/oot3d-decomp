// OoT3D decomp @ 001a4340  name=FUN_001a4340  size=6208

void FUN_001a4340(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar11 = DAT_001a54a0;
  piVar3 = DAT_001a549c;
  fVar2 = DAT_001a46b0;
  iVar7 = DAT_001a46ac;
  iVar8 = param_2 + 0x28a0;
  iVar6 = *(int *)(DAT_001a46a8 + param_2);
  uVar4 = 0;
  switch(*(undefined1 *)(param_1 + 0x479)) {
  case 0:
    iVar7 = FUN_0036bc98(param_1,param_2);
    if (iVar7 == 0) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),
                                          (byte)(in_fpscr >> 0x15) & 3);
      sVar5 = (short)(int)(fVar14 - fVar13);
      if ((short)(int)(fVar12 - fVar11) < 0) {
        sVar5 = -sVar5;
      }
      if ((*(float *)(iVar6 + 0x2c) == *(float *)(param_1 + 0x2c)) && (sVar5 < DAT_001a46b4)) {
        FUN_0036bb28(*(float *)(param_1 + 0x438) + DAT_001a46b8,param_1,param_2);
      }
      goto switchD_001a438c_default;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar6 + 0x2c) = uVar9;
    *(undefined4 *)(iVar6 + 0x30) = uVar10;
    sVar5 = *(short *)(param_1 + 0xbe);
    fVar14 = (float)FUN_002cfca0((int)sVar5);
    fVar11 = DAT_001a46bc;
    *(float *)(iVar6 + 0x28) = *(float *)(iVar6 + 0x28) + fVar14 * DAT_001a46bc;
    fVar14 = (float)FUN_00338f60((int)sVar5);
    uVar9 = DAT_001a46c0;
    *(float *)(iVar6 + 0x30) = *(float *)(iVar6 + 0x30) + fVar14 * fVar11;
    *(undefined4 *)(iVar6 + 0x6c) = uVar9;
    *(undefined4 *)(iVar6 + 0x221c) = uVar9;
    break;
  case 1:
    FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,3);
    *(undefined2 *)(param_1 + 0x480) = 0;
    *(undefined1 *)(param_1 + 0x47d) = 0;
    *(undefined1 *)(param_1 + 0x47e) = 3;
    FUN_0035c528(DAT_001a46c8);
    FUN_003436f0(param_2,0);
    FUN_0034be04(2);
    break;
  case 2:
    switch(*(undefined1 *)(param_1 + 0x478)) {
    case 0:
      if ((DAT_001a46cc <= *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e0) <= DAT_001a46d0)
         ) {
        FUN_00375bcc(param_1,DAT_001a46d4);
      }
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),fVar2,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,4);
        FUN_00367c7c(param_2,DAT_001a46d8,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 1:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,1);
        FUN_00367c7c(param_2,DAT_001a46dc,0);
        *(undefined2 *)(param_1 + 0x484) = 0;
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 2:
      iVar8 = FUN_003769d8(iVar8);
      if ((iVar8 == 5) && (iVar8 = FUN_00346964(param_2), iVar8 != 0)) {
        if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
           (iVar8 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
           *(int *)(DAT_001a46e0 + iVar8) != 0)) {
          iVar8 = iVar8 + 0x3a5c;
        }
        else {
          iVar8 = 0;
        }
        uVar9 = FUN_00375750(iVar8 + 0x10,2);
        FUN_0037573c(param_2,uVar9);
        *(undefined1 *)(iVar7 + 0x5a2) = 1;
        FUN_00347aec(param_2,param_1,0);
        FUN_00370778(param_2);
        *(undefined2 *)(param_1 + 0x484) = 0;
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 3:
      sVar5 = *(short *)(param_1 + 0x484) + 1;
      *(short *)(param_1 + 0x484) = sVar5;
      if (sVar5 < 0x2d) goto switchD_001a438c_default;
      FUN_00367c7c(param_2,DAT_001a4d38,0);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      break;
    case 4:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00347aec(param_2,param_1,1);
        FUN_00370778(param_2);
        *(undefined2 *)(param_1 + 0x484) = 0;
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 5:
      sVar5 = *(short *)(param_1 + 0x484) + 1;
      *(short *)(param_1 + 0x484) = sVar5;
      if (sVar5 < 10) goto switchD_001a438c_default;
      FUN_00367c7c(param_2,DAT_001a4d3c,0);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      break;
    case 6:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,2);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x16);
        *(undefined1 *)(param_1 + 0x47e) = 0;
        *(undefined2 *)(param_1 + 0x484) = 0;
        uVar9 = DAT_001a4d40;
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
        FUN_00367c7c(param_2,uVar9,0);
      }
    }
    if (*(char *)(param_1 + 0x478) != '\a') goto switchD_001a438c_default;
    break;
  case 3:
    switch(*(undefined1 *)(param_1 + 0x478)) {
    case 0:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x19);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 1:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,3);
        FUN_00370778(param_2);
        *(undefined2 *)(param_1 + 0x482) = 0x3c;
        *(undefined1 *)(param_1 + 0x478) = 2;
        goto switchD_001a438c_default;
      }
      break;
    case 2:
      if ((*(short *)(param_1 + 0x482) != 0) &&
         (sVar5 = *(short *)(param_1 + 0x482) + -1, *(short *)(param_1 + 0x482) = sVar5, sVar5 != 0)
         ) goto switchD_001a438c_default;
      FUN_00367c7c(param_2,DAT_001a4d44,0);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      break;
    case 3:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 4) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      iVar7 = FUN_00369f3c(param_2);
      if (iVar7 != 0) {
        FUN_003436f0(param_2,2);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,9);
        uVar9 = DAT_001a4d48;
        *(undefined1 *)(param_1 + 0x47e) = 2;
        FUN_00367c7c(param_2,uVar9,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
        break;
      }
      goto LAB_001a4b1c;
    case 4:
      if ((DAT_001a4d4c <= *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e0) <= DAT_001a4d50)
         ) {
        FUN_00375bcc(param_1,DAT_001a4d54);
      }
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),fVar2,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,10);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 5:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00370778(param_2);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,9);
        *(undefined1 *)(param_1 + 0x47e) = 2;
        uVar9 = *(undefined4 *)(param_1 + 0x1e8);
        *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
        uVar4 = 6;
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(param_1 + 0x1ec) = uVar9;
        *(undefined4 *)(param_1 + 0x1e4) = DAT_001a4d58;
LAB_001a4c4c:
        *(undefined1 *)(param_1 + 0x478) = uVar4;
        goto switchD_001a438c_default;
      }
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x47e) = 0;
      FUN_003436f0(param_2,3);
      FUN_00367c7c(param_2,DAT_001a4d44,0);
      uVar4 = 0xc;
      goto LAB_001a4c4c;
    case 7:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4,
                           *(undefined4 *)(param_1 + 0x1e0));
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x1d);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 8:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 5) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      FUN_00347aec(param_2,param_1,2);
      FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0);
      *(undefined2 *)(param_1 + 0x480) = 0;
      *(undefined1 *)(param_1 + 0x47d) = 0;
      uVar9 = DAT_001a4d60;
      *(undefined1 *)(param_1 + 0x47e) = 0;
      FUN_00367c7c(param_2,uVar9,0);
      uVar4 = 9;
      goto LAB_001a4c4c;
    case 9:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,5);
        FUN_00367c7c(param_2,DAT_001a4d64,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 10:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,5);
        *(undefined1 *)(param_1 + 0x47d) = 6;
        *(undefined1 *)(param_1 + 0x47e) = 3;
        FUN_00367c7c(param_2,DAT_001a4d68,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 0xc:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x19);
        *(undefined1 *)(param_1 + 0x478) = 0xd;
      }
    case 0xd:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 4) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      iVar7 = FUN_00369f3c(param_2);
      if (iVar7 == 0) {
LAB_001a4b1c:
        FUN_003436f0(param_2,4);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x1c);
        *(undefined2 *)(param_1 + 0x480) = 0;
        *(undefined1 *)(param_1 + 0x47d) = 5;
        *(undefined1 *)(param_1 + 0x47e) = 1;
        FUN_00367c7c(param_2,DAT_001a4d5c,0);
        uVar4 = 7;
      }
      else {
        FUN_003436f0(param_2,2);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,9);
        uVar9 = DAT_001a4d48;
        *(undefined1 *)(param_1 + 0x47e) = 2;
        FUN_00367c7c(param_2,uVar9,0);
        uVar4 = 4;
      }
      goto LAB_001a4c4c;
    }
    if (*(char *)(param_1 + 0x478) != '\v') goto switchD_001a438c_default;
    break;
  case 4:
    iVar7 = FUN_001e49a4(param_1,param_2);
    if (iVar7 == 0) goto switchD_001a438c_default;
    break;
  case 5:
    switch(*(undefined1 *)(param_1 + 0x478)) {
    case 0:
      sVar5 = *(short *)(param_1 + 0x484) + 1;
      *(short *)(param_1 + 0x484) = sVar5;
      if (sVar5 < 0x3c) goto switchD_001a438c_default;
LAB_001a4dd4:
      FUN_00367c7c(param_2,DAT_001a547c,0);
      goto LAB_001a4f88;
    case 1:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,7);
LAB_001a5004:
        FUN_00367c7c(param_2,DAT_001a5490,0);
        goto LAB_001a4f88;
      }
      break;
    case 2:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00347aec(param_2,param_1,6);
        FUN_00370778(param_2);
        goto LAB_001a4f88;
      }
      break;
    case 3:
      if (*(short *)(*(int *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54) + 0x1a6) != 2)
      goto switchD_001a438c_default;
      FUN_00367c7c(param_2,DAT_001a5480,0);
LAB_001a4f88:
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      break;
    case 4:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 4) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        iVar7 = FUN_00369f3c(param_2);
        if (iVar7 == 0) {
          FUN_003436f0(param_2,8);
          FUN_00367c7c(param_2,DAT_001a5484,0);
          uVar4 = 9;
          goto LAB_001a4c4c;
        }
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,5);
        *(undefined1 *)(param_1 + 0x47e) = 3;
        FUN_00367c7c(param_2,DAT_001a5488,0);
        uVar9 = DAT_001a548c;
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
        FUN_00375bcc(param_1,uVar9);
      }
      break;
    case 5:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,4);
        goto LAB_001a4f88;
      }
      break;
    case 6:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x21);
        *(undefined1 *)(param_1 + 0x47e) = 0;
        goto LAB_001a4dd4;
      }
      break;
    case 7:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) goto LAB_001a5004;
      break;
    case 8:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00367c7c(param_2,DAT_001a5480,0);
        uVar4 = 4;
        goto LAB_001a4c4c;
      }
      break;
    case 9:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x1a);
        FUN_00367c7c(param_2,DAT_001a5494,0);
        goto LAB_001a4f88;
      }
      break;
    case 10:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x1b);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 0xb:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 4) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      iVar7 = FUN_00369f3c(param_2);
      if (iVar7 == 0) {
LAB_001a512c:
        FUN_00370778(param_2);
        *(undefined1 *)(param_1 + 0x478) = 0xd;
        goto LAB_001a5190;
      }
      FUN_00367c7c(param_2,DAT_001a5498,0);
      uVar4 = 0xc;
      goto LAB_001a4c4c;
    case 0xc:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 5) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      goto LAB_001a512c;
    }
    if (*(char *)(param_1 + 0x478) != '\r') goto switchD_001a438c_default;
LAB_001a5190:
    FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x22);
    if (*(char *)(param_1 + 0x478) != '\r') goto switchD_001a438c_default;
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x478);
    if (cVar1 == '\0') {
      FUN_00347aec(param_2,param_1,7);
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (iVar8 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001a46e0 + iVar8) != 0)) {
        iVar8 = iVar8 + 0x3a5c;
      }
      else {
        iVar8 = 0;
      }
      uVar9 = FUN_00375750(iVar8 + 0x10,1);
      FUN_0037573c(param_2,uVar9);
      *(undefined1 *)(iVar7 + 0x5a2) = 1;
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    }
    else if (cVar1 == '\x01') {
      iVar8 = FUN_0037571c(param_2);
      if (iVar8 == 0) {
        if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
           (iVar8 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
           *(int *)(DAT_001a46e0 + iVar8) != 0)) {
          iVar8 = iVar8 + 0x3a5c;
        }
        else {
          iVar8 = 0;
        }
        uVar9 = FUN_00375750(iVar8 + 0x10,0);
        FUN_0037573c(param_2,uVar9);
        FUN_003436d4(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
        *(undefined4 *)(param_1 + 0xf1c) = 0xffffffff;
        *(undefined1 *)(iVar7 + 0x5a2) = 1;
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
        FUN_0036e980(param_2,param_1,8);
      }
      else {
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_001a54a4 / fVar14 + fVar11) == (uint)*(ushort *)(param_2 + 0x22b8)) {
LAB_001a53d0:
          FUN_00367374(param_2,param_2 + 0x2298);
        }
      }
    }
    else if (cVar1 == '\x02') {
      iVar7 = FUN_0037571c(param_2);
      if (iVar7 == 0) {
        FUN_0036e980(param_2,param_1,1);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x1e);
        FUN_003436f0(param_2,0xb);
        FUN_00367c7c(param_2,DAT_001a54ac,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      else {
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_001a54a8 / fVar14 + fVar11) == (uint)*(ushort *)(param_2 + 0x22b8))
        goto LAB_001a53d0;
      }
    }
    else if (((cVar1 == '\x03') && (iVar7 = FUN_003769d8(iVar8), iVar7 == 5)) &&
            (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
      FUN_00370778(param_2);
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    }
    if (*(char *)(param_1 + 0x478) != '\x04') goto switchD_001a438c_default;
    break;
  case 7:
    switch(*(undefined1 *)(param_1 + 0x478)) {
    case 0:
      uVar9 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar6 + 0x2c) = uVar9;
      *(undefined4 *)(iVar6 + 0x30) = uVar10;
      iVar7 = (int)(short)(*(short *)(param_1 + 0xbe) + -0x3ffc);
      fVar14 = (float)FUN_002cfca0(iVar7);
      fVar11 = DAT_001a57e0;
      *(float *)(iVar6 + 0x28) = *(float *)(iVar6 + 0x28) + fVar14 * DAT_001a57e0;
      fVar14 = (float)FUN_00338f60(iVar7);
      *(float *)(iVar6 + 0x30) = *(float *)(iVar6 + 0x30) + fVar14 * fVar11;
      FUN_00347aec(param_2,param_1,8);
      *(undefined2 *)(param_1 + 0x480) = 0;
      *(undefined1 *)(param_1 + 0x47d) = 4;
      *(undefined1 *)(param_1 + 0x47e) = 2;
      *(undefined2 *)(param_1 + 0x484) = 0;
      uVar9 = DAT_001a57e4;
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      FUN_00367c7c(param_2,uVar9,0);
    case 1:
      sVar5 = *(short *)(param_1 + 0x484) + 1;
      *(short *)(param_1 + 0x484) = sVar5;
      if (0x13 < sVar5) {
LAB_001a5550:
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 2:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00347aec(param_2,param_1,9);
        FUN_00370778(param_2);
        *(undefined2 *)(param_1 + 0x484) = 0;
        goto LAB_001a5550;
      }
      break;
    case 3:
      sVar5 = *(short *)(param_1 + 0x484) + 1;
      *(short *)(param_1 + 0x484) = sVar5;
      if (sVar5 < 0x14) goto switchD_001a438c_default;
      FUN_00367c7c(param_2,DAT_001a57e8,0);
      goto LAB_001a5550;
    case 4:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,0xc);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x17);
        *(undefined2 *)(param_1 + 0x480) = 0;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        *(undefined1 *)(param_1 + 0x47e) = 3;
        FUN_00370778(param_2);
        goto LAB_001a5550;
      }
      break;
    case 5:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a46c4,0x18);
        FUN_00367c7c(param_2,DAT_001a57ec,0);
        goto LAB_001a5550;
      }
      break;
    case 6:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00367c7c(param_2,DAT_001a57f0,0);
        goto LAB_001a5550;
      }
      break;
    case 7:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 4) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      iVar7 = FUN_00369f3c(param_2);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0xd);
        *(undefined2 *)(param_1 + 0x480) = 0xb;
        *(undefined1 *)(param_1 + 0x47d) = 2;
        *(undefined1 *)(param_1 + 0x47e) = 2;
        FUN_00370778(param_2);
        goto LAB_001a5550;
      }
      FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0x1f);
      uVar4 = 0xb;
      *(undefined2 *)(param_1 + 0x480) = 0xb;
      *(undefined1 *)(param_1 + 0x47d) = 5;
      *(undefined1 *)(param_1 + 0x47e) = 1;
      FUN_00367c7c(param_2,DAT_001a57f8,0);
      goto LAB_001a574c;
    case 8:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0xf);
        *(undefined2 *)(param_1 + 0x480) = 3;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        *(undefined1 *)(param_1 + 0x47e) = 3;
        FUN_00367c7c(param_2,DAT_001a57fc,0);
        goto LAB_001a5550;
      }
      break;
    case 9:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0xe);
        FUN_00370778(param_2);
        goto LAB_001a5550;
      }
      break;
    case 10:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0x18);
        FUN_00367c7c(param_2,DAT_001a57f0,0);
        uVar4 = 7;
        goto LAB_001a4c4c;
      }
      break;
    case 0xb:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0x20);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 0xc:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 != 5) || (iVar7 = FUN_00346964(param_2), iVar7 == 0)) break;
      FUN_00370778(param_2);
      *(undefined1 *)(param_1 + 0x478) = 0xd;
      goto LAB_001a5918;
    }
    if (*(char *)(param_1 + 0x478) == '\r') {
LAB_001a5918:
      *(char *)(param_1 + 0x479) = *(char *)(param_1 + 0x479) + '\x01';
LAB_001a574c:
      *(undefined1 *)(param_1 + 0x478) = uVar4;
    }
    goto switchD_001a438c_default;
  case 8:
    switch(*(undefined1 *)(param_1 + 0x478)) {
    case 0:
      FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0x12);
      *(undefined2 *)(param_1 + 0x480) = 0;
      *(undefined1 *)(param_1 + 0x47d) = 0;
      *(undefined1 *)(param_1 + 0x47e) = 2;
      FUN_00347aec(param_2,param_1,10);
      *(undefined2 *)(param_1 + 0x484) = 0;
      *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
    case 1:
      sVar5 = *(short *)(param_1 + 0x484) + 1;
      *(short *)(param_1 + 0x484) = sVar5;
      if (9 < sVar5) {
        FUN_00367c7c(param_2,DAT_001a5d44,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 2:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436f0(param_2,0xd);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0x13);
        *(undefined2 *)(param_1 + 0x480) = 0;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        *(undefined1 *)(param_1 + 0x47e) = 3;
        FUN_00367c7c(param_2,DAT_001a5d48,0);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
      break;
    case 3:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0x14);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 4:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_00367c7c(param_2,DAT_001a5d4c,0);
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,7);
        *(undefined2 *)(param_1 + 0x480) = 0;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        *(undefined1 *)(param_1 + 0x47e) = 0;
        *(undefined1 *)(param_1 + 0x478) = 5;
        *(undefined2 *)(param_1 + 0x486) = 0;
        *(undefined1 *)(param_1 + 0x47f) = 0;
        goto switchD_001a438c_default;
      }
      break;
    case 5:
      iVar7 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001a46b0,param_1 + 0x1a4);
      if (iVar7 != 0) {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,8);
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    case 6:
      iVar7 = FUN_003769d8(iVar8);
      if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
        FUN_003436d4(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
        *(undefined4 *)(param_1 + 0xf1c) = 0xffffffff;
        FUN_0039bf98(param_2);
        FUN_0033885c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54),1);
        *(undefined1 *)(param_1 + 0x478) = 7;
        (**(code **)(DAT_001a5d50 + param_2))(param_2,param_1);
        FUN_003724dc(ABS(*(float *)(param_1 + 0x98)) + fVar2,ABS(*(float *)(param_1 + 0x9c)) + fVar2
                     ,param_1,param_2,0xb);
        FUN_00371680(param_2,4,0);
      }
      break;
    case 7:
      iVar7 = FUN_00371e40(param_1,param_2);
      if (iVar7 == 0) {
        FUN_003724dc(ABS(*(float *)(param_1 + 0x98)) + fVar2,ABS(*(float *)(param_1 + 0x9c)) + fVar2
                     ,param_1,param_2,0xb);
      }
      else {
        FUN_003717ac(param_1 + 0x1a4,DAT_001a57f4,0);
        FUN_00367c48(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
        *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
      }
    }
    if (*(char *)(param_1 + 0x478) == '\b') {
      FUN_0036e980(param_2,param_1,7);
      iVar7 = DAT_001a5d54;
      *(undefined2 *)(DAT_001a5d54 + 0x7e) = 0x32;
      *(ushort *)(iVar7 + -0x60c) = *(ushort *)(iVar7 + -0x60c) | 1;
      *(undefined4 *)(param_1 + 0x3f4) = DAT_001a5d58;
    }
  default:
    goto switchD_001a438c_default;
  }
  *(char *)(param_1 + 0x479) = *(char *)(param_1 + 0x479) + '\x01';
  *(undefined1 *)(param_1 + 0x478) = 0;
switchD_001a438c_default:
  uVar9 = *(undefined4 *)(iVar6 + 0x2c);
  uVar10 = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(param_1 + 0x46c) = uVar9;
  *(undefined4 *)(param_1 + 0x470) = uVar10;
  if (*(char *)(param_1 + 0x479) == '\x06') {
    uVar9 = 2;
  }
  else {
    uVar9 = 1;
  }
  FUN_00343414(param_1,param_1 + 0x450,uVar9);
  iVar7 = *(int *)(param_1 + 0x1d4);
  if ((((((((iVar7 != 0x22 && iVar7 != 0x23) && iVar7 != 6) && iVar7 != 7) && iVar7 != 10) &&
        iVar7 != 0xb) && iVar7 != 0xc) &&
      ((((((iVar7 != 0xd && iVar7 != 0x12) && iVar7 != 0x14) && iVar7 != 0x27) && iVar7 != 0x15) &&
       iVar7 != 0x10) && iVar7 != 0x11)) && ((iVar7 != 2 && iVar7 != 0xf) && iVar7 != 3)) {
    return;
  }
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(fVar2,param_2,param_1,param_1 + 0x1a4);
  return;
}
