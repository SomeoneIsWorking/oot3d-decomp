// OoT3D decomp @ 004c02e8  name=FUN_004c02e8  size=588

void FUN_004c02e8(int param_1,uint param_2)

{
  short sVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  uVar3 = (uint)*(short *)(param_1 + 0x1c);
  if ((int)uVar3 < 4) {
LAB_004c0338:
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
  }
  else {
    bVar8 = 0x13 < uVar3;
    uVar5 = param_2;
    if (uVar3 != 0x14) {
      uVar5 = uVar3 - 6;
      bVar8 = 3 < uVar5;
    }
    if (!bVar8 || (uVar3 == 0x14 || uVar5 == 4)) goto LAB_004c0338;
    bVar8 = 0xc < uVar3;
    bVar6 = uVar3 == 0xd;
    if (!bVar6) {
      uVar5 = uVar3 - 0x10;
      bVar8 = uVar5 != 0;
    }
    bVar7 = bVar6 || uVar5 == 1;
    if (bVar8 && (!bVar6 && uVar5 != 1)) {
      bVar8 = 3 < uVar3 - 0x15;
      bVar7 = uVar3 - 0x15 == 4;
    }
    if (!bVar8 || bVar7) goto LAB_004c0338;
    if (0x14 < (int)uVar3) {
      if (uVar3 == 0x19) goto LAB_004c0400;
      if (*(short *)(param_1 + 0x1b2) == -1) {
        iVar4 = FUN_00375a18(param_1 + 0xbc,(int)(short)(*(short *)(param_1 + 0x34) + -0x4000),2,
                             DAT_004c0534 << 1,DAT_004c0534);
        if (iVar4 == 0) {
          *(undefined2 *)(param_1 + 0x1b2) = 0xfffe;
        }
      }
      else {
        iVar4 = FUN_00375a18(param_1 + 0xbc,(int)(short)-(*(short *)(param_1 + 0x34) + 0x4000),2,
                             DAT_004c0534 << 1,DAT_004c0534);
        if (iVar4 == 0) {
          *(undefined2 *)(param_1 + 0x1b2) = 0xffff;
        }
      }
      FUN_00375a18(param_1 + 0x34,0,2,0x9c4,500);
    }
  }
  if (*(short *)(param_1 + 0x1c) == 6) {
    fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0xc4) = DAT_004c053c + fVar9 * DAT_004c0538;
  }
LAB_004c0400:
  fVar9 = DAT_004c0540;
  FUN_0036e168(DAT_004c0540,DAT_004c0548,DAT_004c0544,DAT_004c0540,param_1 + 0x6c);
  if ((*(short *)(param_1 + 0x1ac) == 0) &&
     (sVar1 = *(short *)(param_1 + 0x1c), (sVar1 != 0x11 && sVar1 != 6) && sVar1 != 7)) {
    *(undefined2 *)(param_1 + 0x1ac) = 0xffff;
  }
  if ((*(short *)(param_1 + 0x1b2) == 0) &&
     (sVar1 = *(short *)(param_1 + 0x1c), (sVar1 != 0x11 && sVar1 != 6) && sVar1 != 7)) {
    FUN_00374428(param_1);
  }
  fVar2 = DAT_004c0554;
  if ((*(float *)(param_1 + 0x70) == fVar9) || ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    if ((*(short *)(param_1 + 0x1c) == 0x11) && ((*(uint *)(DAT_004c0550 + param_2) & 7) == 0)) {
      local_28 = fVar9;
      local_24 = fVar9;
      local_20 = fVar9;
      local_34 = (float)FUN_003738a8(DAT_004c0554);
      local_34 = local_34 + *(float *)(param_1 + 0x28);
      fVar9 = (float)FUN_003738a8(fVar2);
      local_30 = fVar9 + fVar2 + *(float *)(param_1 + 0x2c);
      local_2c = (float)FUN_003738a8(fVar2);
      local_2c = local_2c + *(float *)(param_1 + 0x30);
      FUN_0036ea98(param_2,&local_34,&local_28,&local_28,DAT_004c0558 + -4,DAT_004c0558,2000,0x10);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_004c054c;
  }
  return;
}
