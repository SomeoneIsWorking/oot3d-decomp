// OoT3D decomp @ 003f3630  name=FUN_003f3630  size=2164

void FUN_003f3630(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  iVar8 = *(int *)(DAT_003f3ac4 + param_2);
  iVar4 = FUN_00373074(param_2 + 0x3a58,*(undefined1 *)(param_1 + 0x1a4));
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1a4);
  }
  if ((int)*(char *)(param_1 + 0x1e) == (uint)*(byte *)(param_1 + 0x1a4)) {
    *(undefined4 *)(param_1 + 0x1b78) = 1;
    uVar5 = DAT_003f3ad0;
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    case 0:
    case 1:
      if (*(int *)(param_1 + 0x1920) == 0) {
        if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
           (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
           *(int *)(DAT_003f3ac8 + iVar4) != 0)) {
          iVar4 = iVar4 + 0x3a5c;
        }
        else {
          iVar4 = 0;
        }
        if (*DAT_003f3acc == 0xcd) {
          uVar5 = FUN_00372f0c(iVar4 + 0x10,1);
        }
        else {
          uVar5 = FUN_00372f0c(iVar4 + 0x10,0);
        }
        uVar2 = DAT_003f3ad0;
        iVar4 = 0;
        do {
          iVar8 = param_1 + iVar4 * 4;
          FUN_00372f38(param_1,param_2,iVar8 + 0x1920,4,0);
          FUN_00372d94(*(undefined4 *)(*(int *)(iVar8 + 0x1920) + 0xc),uVar5);
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*(int *)(*(int *)(iVar8 + 0x1920) + 0xc) + 0x10) = 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x1920) + 0xc) + 0xc) = uVar2;
        } while (iVar4 < 0x96);
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      *(undefined4 *)(param_1 + 0x1918) = DAT_003f3ad4;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    case 7:
      *(undefined4 *)(param_1 + 0x1918) = DAT_003f3ad8;
      iVar4 = 0;
      do {
        fVar9 = (float)FUN_00371e50(uVar5);
        FUN_00372f38(param_1,param_2,param_1 + iVar4 * 4 + 0x1920,(int)fVar9 % 2 + 5,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x1e);
      return;
    case 0xd:
      iVar4 = FUN_0035a3c4(param_2,2);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x1918) = DAT_003f3adc;
      }
      if (*(int *)(param_1 + 0x1920) == 0) {
        FUN_00372f38(param_1,param_2,param_1 + 0x1920,3,param_1 + 0x1924,6,0);
        return;
      }
      break;
    case 0xe:
      if (*(int *)(param_1 + 0x1920) == 0) {
        uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x1920,8,0);
        uVar5 = FUN_00372f0c(uVar5,1);
        FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1920) + 0xc),uVar5);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1920) + 0xc) + 0x10) = 1;
        return;
      }
      break;
    case 0xf:
      *(undefined1 *)(param_2 + 0x3262) = 0xff;
      *(undefined1 *)(param_2 + 0x3263) = 0xff;
      *(undefined1 *)(param_2 + 0x3264) = 0xff;
      piVar3 = DAT_003f3ae0;
      *(undefined1 *)(param_2 + 0x3261) = 0;
      fVar12 = DAT_003f3af8;
      fVar9 = DAT_003f3ae8;
      iVar4 = *piVar3;
      uVar7 = (uint)*(byte *)(param_1 + 0x1a6);
      iVar6 = (int)*(short *)(iVar4 + 0x110);
      fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (((int)uVar7 <= (int)(DAT_003f3ae4 / fVar10 + DAT_003f3ae8)) &&
         (fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3),
         (int)(DAT_003f3aec / fVar10 + DAT_003f3ae8) <= (int)uVar7)) {
        if (uVar7 == 0) {
          fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = DAT_003f3af4 * fVar10 * DAT_003f3af0 - DAT_003f3ae8;
        }
        else {
          fVar10 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = DAT_003f3ae8 + fVar10 * fVar11 * DAT_003f3af0;
        }
        *(undefined1 *)(param_2 + 0x3261) = 1;
        fVar10 = (float)VectorSignedToFloat((int)fVar10,(byte)(in_fpscr >> 0x15) & 3);
        uVar5 = VectorFloatToUnsigned
                          (DAT_003f3b00 - (fVar10 - fVar12) * DAT_003f3afc * DAT_003f3b00,3);
        *(char *)(param_2 + 0x3265) = (char)uVar5;
      }
      fVar12 = DAT_003f3e54;
      iVar6 = (int)*(short *)(iVar4 + 0x110);
      uVar7 = (uint)*(byte *)(param_1 + 0x1a6);
      fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (((int)uVar7 <= (int)(DAT_003f3b04 / fVar10 + fVar9)) &&
         (fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3),
         (int)(DAT_003f3b08 / fVar10 + fVar9) <= (int)uVar7)) {
        if (uVar7 == 0) {
          fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = DAT_003f3af4 * fVar10 * DAT_003f3af0 - fVar9;
        }
        else {
          fVar10 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = fVar9 + fVar10 * fVar11 * DAT_003f3af0;
        }
        *(undefined1 *)(param_2 + 0x3261) = 1;
        fVar10 = (float)VectorSignedToFloat((int)fVar10,(byte)(in_fpscr >> 0x15) & 3);
        uVar5 = VectorFloatToUnsigned((fVar10 - fVar12) * DAT_003f3e58 * DAT_003f3b00,3);
        *(char *)(param_2 + 0x3265) = (char)uVar5;
      }
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_003f3aec / fVar12 + fVar9) == (uint)*(byte *)(param_1 + 0x1a6)) {
        *(undefined4 *)(iVar8 + 0x140) = 0;
      }
      cVar1 = *(char *)(param_1 + 0x1a6);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1a6) = cVar1 + -1, cVar1 == '\x02')) {
        if (*(short *)(param_2 + 0x104) == 0x43) {
          fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(DAT_003f3e60 + param_2) = (short)(int)(DAT_003f3e5c / fVar12 + fVar9);
          iVar4 = param_2 + (uint)*(byte *)(param_2 + 0x3a5a) * 0x80;
          if (DAT_003f3acc[1] == 0) {
            if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 0x3a6c;
            }
            uVar5 = FUN_00375750(iVar4,4);
            FUN_0037573c(param_2,uVar5);
          }
          else {
            if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 0x3a6c;
            }
            uVar5 = FUN_00375750(iVar4,8);
            FUN_0037573c(param_2,uVar5);
          }
        }
        else {
          fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(DAT_003f3e60 + param_2) = (short)(int)(DAT_003f3e64 / fVar12 + fVar9);
          iVar4 = param_2 + (uint)*(byte *)(param_2 + 0x3a5a) * 0x80;
          if (DAT_003f3acc[1] == 0) {
            if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 0x3a6c;
            }
            uVar5 = FUN_00375750(iVar4,2);
            FUN_0037573c(param_2,uVar5);
          }
          else {
            if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 0x3a6c;
            }
            uVar5 = FUN_00375750(iVar4,6);
            FUN_0037573c(param_2,uVar5);
          }
        }
        iVar4 = FUN_00334370(param_2);
        if ((iVar4 != 0) && (iVar4 = FUN_00296eb4(param_2,iVar8), iVar4 != 0)) {
          *(undefined1 *)(DAT_003f3e68 + 0x5a2) = 1;
        }
        *(undefined4 *)(param_1 + 0x1918) = DAT_003f3e6c;
      }
      if (*(int *)(param_1 + 0x191c) == 0) {
        iVar4 = FUN_0035010c(0x28);
joined_r0x003f3ec8:
        uVar5 = 0;
        if (iVar4 != 0) {
          uVar5 = FUN_003500c4();
        }
        *(undefined4 *)(param_1 + 0x191c) = uVar5;
        FUN_0034ff2c(uVar5,1,1,0x1e,2,0);
        FUN_0034fea8(*(undefined4 *)(param_1 + 0x191c),(int)*(char *)(param_1 + 0x1e),param_2,2,
                     DAT_003f3f9c,DAT_003f3f9c,DAT_003f3f98,DAT_003f3f98);
        return;
      }
      break;
    case 0x10:
      if (*(short *)(param_2 + 0x104) == 0x43) {
        iVar4 = param_2 + (uint)*(byte *)(DAT_003f3e70 + param_2) * 0x80;
        if (DAT_003f3acc[1] == 0) {
          if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0x3a6c;
          }
          uVar5 = FUN_00375750(iVar4,5);
          FUN_0037573c(param_2,uVar5);
        }
        else {
          if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0x3a6c;
          }
          uVar5 = FUN_00375750(iVar4,9);
          FUN_0037573c(param_2,uVar5);
        }
      }
      else {
        iVar4 = param_2 + (uint)*(byte *)(DAT_003f3e70 + param_2) * 0x80;
        if (DAT_003f3acc[1] == 0) {
          if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0x3a6c;
          }
          uVar5 = FUN_00375750(iVar4,3);
          FUN_0037573c(param_2,uVar5);
        }
        else {
          if (*(int *)(DAT_003f3ac8 + iVar4) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0x3a6c;
          }
          uVar5 = FUN_00375750(iVar4,7);
          FUN_0037573c(param_2,uVar5);
        }
      }
      *(undefined1 *)(DAT_003f3e68 + 0x5a2) = 1;
      *(undefined4 *)(param_1 + 0x1918) = DAT_003f3f94;
      if (*(int *)(param_1 + 0x191c) == 0) {
        iVar4 = FUN_0035010c(0x28);
        goto joined_r0x003f3ec8;
      }
      break;
    case 0x11:
    case 0x12:
      if (*(int *)(param_1 + 0x191c) == 0) {
        iVar4 = FUN_0035010c(0x28);
        uVar5 = 0;
        if (iVar4 != 0) {
          uVar5 = FUN_003500c4();
        }
        *(undefined4 *)(param_1 + 0x191c) = uVar5;
        FUN_0034ff2c(uVar5,1,1,0x14,2,0);
        FUN_0034fea8(*(undefined4 *)(param_1 + 0x191c),(int)*(char *)(param_1 + 0x1e),param_2,2,
                     DAT_003f3f9c,DAT_003f3f9c,DAT_003f3f98,DAT_003f3f98);
        return;
      }
    }
  }
  return;
}
