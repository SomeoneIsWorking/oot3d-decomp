// OoT3D decomp @ 004401a8  name=FUN_004401a8  size=1400

void FUN_004401a8(int *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  fVar12 = DAT_004404f8;
  fVar3 = DAT_004404f4;
  fVar13 = DAT_004404f0;
  fVar14 = DAT_004404ec;
  iVar2 = DAT_004404e8;
  iVar8 = DAT_004404e4;
  switch((char)param_1[1]) {
  case '\x01':
    fVar14 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar14;
    if ((int)fVar14 < 0x3f800000) {
      if (fVar14 <= fVar3) {
        param_1[5] = iVar8;
      }
      return;
    }
    param_1[5] = iVar2;
    return;
  case '\x02':
    param_1[0x3e] = (int)DAT_004404ec;
    fVar14 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar14;
    if ((int)fVar14 < 0x3f800000) {
      if (fVar14 <= fVar3) {
        param_1[5] = iVar8;
      }
    }
    else {
      param_1[5] = iVar2;
    }
    iVar8 = param_1[0x11c];
    param_1[0x11c] = iVar8 + -1;
    if (iVar8 + -1 < 1) {
      param_1[0x11c] = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    break;
  case '\x03':
    fVar11 = (float)param_1[4];
    param_1[0x16] = (int)((float)param_1[0x16] - fVar11);
    param_1[0x25] = (int)((float)param_1[0x25] - fVar11);
    param_1[0x7f] = (int)((float)param_1[0x7f] - fVar11);
    param_1[0x8e] = (int)((float)param_1[0x8e] - fVar11);
    fVar15 = DAT_004404fc;
    fVar12 = (float)param_1[0x3e] + fVar12;
    param_1[0x3e] = (int)fVar12;
    if (0x3f800000 < (int)fVar12) {
      fVar12 = fVar14;
    }
    param_1[0x3e] = (int)fVar12;
    fVar12 = (float)param_1[0x42];
    param_1[0x42] = (int)(fVar12 + fVar15);
    if (0x3f800000 < (int)(fVar12 + fVar15)) {
      param_1[0x42] = (int)fVar14;
      param_1[6] = param_1[6] | 1;
    }
    fVar14 = (float)param_1[0x51] + DAT_00440500;
    param_1[0x51] = (int)fVar14;
    if (fVar14 <= fVar3) {
      fVar14 = fVar3;
    }
    param_1[0x51] = (int)fVar14;
    if (0 < param_1[0x11c]) {
      iVar8 = param_1[0x11c] + -1;
      param_1[0x11c] = iVar8;
      if ((iVar8 < 5) && (param_1[4] = (int)(fVar11 * fVar13), iVar8 < 1)) {
        param_1[0x11c] = 0;
        param_1[4] = (int)fVar3;
        iVar8 = DAT_00440504;
        param_1[6] = param_1[6] | 2;
        param_1[0x16] = iVar8;
        param_1[0x25] = DAT_00440508;
        param_1[0x7f] = DAT_0044050c;
        param_1[0x8e] = DAT_00440510;
      }
    }
    if ((~param_1[6] & 3U) == 0) {
      *(undefined1 *)(param_1 + 1) = 8;
      *(undefined1 *)((int)param_1 + 0xf) = 1;
    }
    return;
  case '\x04':
    iVar8 = param_1[0x11c];
    param_1[0x11c] = iVar8 + -1;
    if (iVar8 + -1 < 1) {
      *(undefined1 *)(param_1 + 1) = 5;
      param_1[0x11c] = 5;
      *(undefined1 *)((int)param_1 + 0xf) = 0;
      return;
    }
    break;
  case '\x05':
    fVar13 = (float)param_1[0x3e] + DAT_00440794;
    param_1[0x3e] = (int)fVar13;
    if (fVar13 <= fVar3) {
      fVar13 = fVar3;
    }
    param_1[0x3e] = (int)fVar13;
    iVar8 = param_1[0x11c];
    param_1[0x11c] = iVar8 + -1;
    if (iVar8 + -1 < 1) {
      param_1[0x51] = (int)fVar3;
      param_1[4] = (int)fVar14;
      *(undefined1 *)(param_1 + 1) = 6;
      param_1[0x11c] = 0xf;
      return;
    }
    break;
  case '\x06':
    *(float *)(param_1[0x115] + 4) = *(float *)(param_1[0x115] + 4) - (float)param_1[4];
    *(float *)(param_1[0x116] + 4) = *(float *)(param_1[0x116] + 4) - (float)param_1[4];
    *(float *)(param_1[0x117] + 4) = *(float *)(param_1[0x117] + 4) - (float)param_1[4];
    *(float *)(param_1[0x118] + 4) = *(float *)(param_1[0x118] + 4) - (float)param_1[4];
    fVar14 = DAT_00440798;
    *(float *)(param_1[0x119] + 4) = *(float *)(param_1[0x119] + 4) - (float)param_1[4];
    fVar14 = (float)param_1[4] * fVar14;
    param_1[4] = (int)fVar14;
    if (0x42000000 < (int)fVar14) {
      fVar14 = DAT_0044079c;
    }
    param_1[4] = (int)fVar14;
    fVar14 = DAT_004407a0;
    *(float *)(param_1[0x11a] + 0x38) = *(float *)(param_1[0x11a] + 0x38) + DAT_004407a0;
    *(float *)(param_1[0x11b] + 0x38) = *(float *)(param_1[0x11b] + 0x38) + fVar14;
    param_1[0x42] = (int)((float)param_1[0x42] + fVar14);
    iVar8 = param_1[0x11c];
    param_1[0x11c] = iVar8 + -1;
    if (iVar8 + -1 < 1) {
      *(undefined1 *)(param_1 + 1) = 9;
    }
    return;
  case '\b':
    if (*(char *)((int)param_1 + 7) != '\0') {
      fVar12 = (float)param_1[5];
      fVar15 = (float)param_1[0xe7] + fVar12;
      param_1[0xe7] = (int)fVar15;
      param_1[0xf6] = (int)((float)param_1[0xf6] + fVar12);
      param_1[0x105] = (int)((float)param_1[0x105] + fVar12);
      param_1[0x114] = (int)((float)param_1[0x114] + fVar12);
      if ((int)fVar15 < 0x3f800000) {
        if (fVar15 <= fVar3) {
          param_1[5] = iVar8;
        }
      }
      else {
        param_1[5] = iVar2;
      }
      iVar8 = FUN_002f43e8();
      if (iVar8 == 0) {
        FUN_0044c2e0(param_1);
        uVar6 = DAT_0044051c;
        uVar5 = DAT_00440518;
        uVar4 = DAT_00440514;
        cVar1 = *(char *)((int)param_1 + 0xd);
        bVar10 = cVar1 == '\0';
        if (bVar10) {
          cVar1 = (char)param_1[3];
        }
        if (bVar10 && cVar1 == '\0') {
          uVar9 = *(uint *)(*param_1 + 0x18);
          if ((uVar9 & 0x10) == 0 && (uVar9 & 0x10000000) == 0) {
            if ((uVar9 & 0x20) == 0 && (uVar9 & 0x20000000) == 0) {
              if ((uVar9 & 9) != 0) {
                if (*(char *)((int)param_1 + 5) == '\0') {
                  uVar7 = 1;
                }
                else {
                  uVar7 = 2;
                }
                *(undefined1 *)(param_1 + 2) = uVar7;
                *(undefined1 *)(param_1 + 1) = 4;
                *(undefined1 *)((int)param_1 + 7) = 0;
                param_1[0x11c] = 0x14;
                param_1[5] = (int)fVar13;
                param_1[0x51] = (int)fVar3;
                if ((char)param_1[2] == '\x02') {
                  FUN_0030765c();
                }
                else {
                  FUN_00307668(DAT_00440790);
                }
                FUN_002e7818(param_1);
              }
            }
            else {
              if (*(char *)((int)param_1 + 5) == '\x01') {
                *(undefined1 *)((int)param_1 + 5) = 0;
                FUN_0037547c(uVar4,0,4,uVar6,uVar6,uVar5);
              }
              iVar2 = DAT_0044052c;
              iVar8 = DAT_00440528;
              param_1[0x9d] = DAT_00440528;
              param_1[0xac] = iVar8;
              param_1[0xbb] = iVar2;
              param_1[0xca] = iVar2;
              param_1[0xd9] = iVar8;
              param_1[0xe8] = iVar8;
              param_1[0xf7] = iVar2;
              param_1[0x106] = iVar2;
            }
          }
          else {
            if (*(char *)((int)param_1 + 5) == '\0') {
              *(undefined1 *)((int)param_1 + 5) = 1;
              FUN_0037547c(uVar4,0,4,uVar6,uVar6,uVar5);
            }
            iVar2 = DAT_00440524;
            iVar8 = DAT_00440520;
            param_1[0x9d] = DAT_00440520;
            param_1[0xac] = iVar8;
            param_1[0xbb] = iVar2;
            param_1[0xca] = iVar2;
            param_1[0xd9] = iVar8;
            param_1[0xe8] = iVar8;
            param_1[0xf7] = iVar2;
            param_1[0x106] = iVar2;
          }
        }
      }
      if (*(char *)((int)param_1 + 5) != '\0') {
        param_1[0x23] = (int)fVar13;
        param_1[0x22] = (int)fVar13;
        param_1[0x21] = (int)fVar13;
        param_1[0x32] = (int)fVar14;
        param_1[0x31] = (int)fVar14;
        param_1[0x30] = (int)fVar14;
        return;
      }
      param_1[0x23] = (int)fVar14;
      param_1[0x22] = (int)fVar14;
      param_1[0x21] = (int)fVar14;
      param_1[0x32] = (int)fVar13;
      param_1[0x31] = (int)fVar13;
      param_1[0x30] = (int)fVar13;
      return;
    }
  }
  return;
}
