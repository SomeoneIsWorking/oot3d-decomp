// OoT3D decomp @ 0022b71c  name=FUN_0022b71c  size=1380

void FUN_0022b71c(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r2;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;

  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x1b2)) {
    *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + -1;
  }
  if (((int)*(short *)(param_1 + 0x1b2) - 1U < 0x28) && (*(short *)(param_1 + 0x1ac) < 1)) {
    *(short *)(param_1 + 0x1ae) = *(short *)(param_1 + 0x1b2);
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  fVar2 = DAT_0022ba64;
  FUN_0036e168(*(float *)(param_1 + 0x1b4),DAT_0022ba60,*(float *)(param_1 + 0x1b4) * DAT_0022ba60,
               DAT_0022ba64,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  if (*(float *)(param_1 + 0x70) != fVar2) {
    FUN_00376864(param_1);
    puVar3 = DAT_0022ba6c;
    if (*(int *)(DAT_0022ba68 + param_2) != *(int *)(DAT_0022ba6c + 8)) {
      *(int *)(DAT_0022ba6c + 8) = *(int *)(DAT_0022ba68 + param_2);
      iVar6 = 0;
      *puVar3 = 0;
      iVar7 = extraout_r2;
      do {
        if ((*(ushort *)(param_2 + iVar6 * 2 + 0x2004) & 1) != 0) {
          iVar4 = *(int *)(param_2 + iVar6 * 0x6c + 0xaec);
          if (iVar4 != 0) {
            iVar7 = *(int *)(iVar4 + 0x13c);
          }
          if (iVar4 != 0 && iVar7 != 0) {
            bVar9 = false;
            if (*(float *)(iVar4 + 0x28) == *(float *)(iVar4 + 0x108)) {
              bVar9 = *(float *)(iVar4 + 0x2c) == *(float *)(iVar4 + 0x10c);
            }
            bVar10 = false;
            if (bVar9) {
              bVar10 = *(float *)(iVar4 + 0x30) == *(float *)(iVar4 + 0x110);
            }
            if (!bVar10) {
              *puVar3 = 1;
              break;
            }
          }
        }
        iVar6 = (int)(short)((short)iVar6 + 1);
      } while (iVar6 < 0x32);
    }
    FUN_00376340(DAT_0022ba74,DAT_0022ba70,DAT_0022ba70,param_2,param_1,0x1d);
    if (DAT_0022ba78 <= *(uint *)(param_1 + 0x84)) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
  }
  FUN_0037632c(param_1,param_1 + 0x1b8);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1b8);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (((sVar1 == 0x15 || sVar1 == 0x16) || sVar1 == 0x17) || sVar1 == 0x18) {
    fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    fVar11 = fVar11 * DAT_0022ba7c;
    *(float *)(param_1 + 0xc4) = fVar11;
    if (fVar11 < fVar2) {
      fVar11 = -fVar11;
    }
    *(float *)(param_1 + 0xc4) = fVar11;
  }
  if (0 < *(short *)(param_1 + 0x1ac)) {
    return;
  }
  if ((((DAT_0022ba80 < *(int *)(param_1 + 0x98)) || (DAT_0022ba84 < *(uint *)(param_1 + 0x9c))) ||
      ((int)(DAT_0022ba84 + 0x80000000) < (int)*(uint *)(param_1 + 0x9c))) &&
     (iVar7 = FUN_00371e40(param_1,param_2), iVar7 == 0)) {
    return;
  }
  if (*(short *)(DAT_0022ba88 + param_2) != 0) {
    return;
  }
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    FUN_00376a78(param_2,0x84);
    break;
  case 1:
    FUN_00376a78(param_2,0x85);
    break;
  case 2:
    FUN_00376a78(param_2,0x86);
    break;
  case 3:
    FUN_00376a78(param_2,0x83);
    break;
  case 4:
  case 0xb:
    FUN_00376a78(param_2,0x8e);
    break;
  case 5:
    FUN_00376a78(param_2,3);
    break;
  case 6:
    iVar8 = 0x3e;
    goto LAB_0022bb40;
  case 7:
    iVar8 = 0x3d;
    goto LAB_0022bb40;
  case 8:
    FUN_00376a78(param_2,0x92);
    break;
  case 9:
    FUN_00376a78(param_2,0x93);
    break;
  case 10:
    FUN_00376a78(param_2,0x94);
    break;
  case 0xc:
    iVar8 = 2;
    goto LAB_0022bb40;
  case 0xd:
    iVar8 = 7;
    goto LAB_0022bb40;
  case 0xe:
    iVar8 = 0x44;
    goto LAB_0022bb40;
  case 0xf:
    iVar8 = 0x43;
    goto LAB_0022bb40;
  case 0x10:
    iVar8 = 0x3c;
    goto LAB_0022bb40;
  case 0x11:
    iVar8 = 0x42;
    goto LAB_0022bb40;
  case 0x12:
    FUN_00352dbc(param_2,0x70);
    break;
  case 0x13:
    FUN_00376a78(param_2,0x88);
    break;
  case 0x14:
    FUN_00376a78(param_2,0x87);
    break;
  case 0x15:
    iVar8 = 0x29;
    goto LAB_0022bb40;
  case 0x16:
    iVar8 = 0x2a;
    goto LAB_0022bb40;
  case 0x17:
    iVar8 = 0x2d;
    goto LAB_0022bb40;
  case 0x18:
    iVar8 = 0x2c;
LAB_0022bb40:
    iVar7 = FUN_00371e40(param_1,param_2);
    if (iVar7 == 0) {
      FUN_00346778(param_1,param_2,iVar8);
    }
  }
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0x15) {
LAB_0022bbf0:
    iVar8 = FUN_00371e40(param_1,param_2);
    if (iVar8 != 0) {
      FUN_003329d8(param_2,(int)*(short *)(param_1 + 0x1a8));
      FUN_00374428(param_1);
    }
  }
  else {
    if (sVar1 < 0x16) {
      if ((sVar1 == 6 || sVar1 == 7) || sVar1 == 0x11) goto LAB_0022bbf0;
    }
    else if ((sVar1 == 0x16 || sVar1 == 0x17) || sVar1 == 0x18) goto LAB_0022bbf0;
    uVar5 = DAT_0022bd18;
    if (((2 < sVar1) && (sVar1 != 0x13)) && (uVar5 = DAT_0022bd1c, iVar8 != 0)) {
      iVar8 = FUN_00371e40(param_1,param_2);
      if (iVar8 == 0) {
        return;
      }
      FUN_003329d8(param_2,(int)*(short *)(param_1 + 0x1a8));
      FUN_00374428(param_1);
      return;
    }
    FUN_0037547c(uVar5,0,4,DAT_0022bd14);
    FUN_003329d8(param_2,(int)*(short *)(param_1 + 0x1a8));
    *(undefined2 *)(param_1 + 0x1b2) = 0xf;
    *(undefined2 *)(param_1 + 0x1ac) = 0x23;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(float *)(param_1 + 100) = fVar2;
    *(float *)(param_1 + 0x70) = fVar2;
    FUN_0037572c(*(undefined4 *)(param_1 + 0x1b4),param_1);
    uVar5 = DAT_0022bd20;
    *(undefined2 *)(param_1 + 0x1aa) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x214) = 0;
  return;
}
