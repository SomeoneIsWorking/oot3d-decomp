// OoT3D decomp @ 0043fcbc  name=FUN_0043fcbc  size=312

void FUN_0043fcbc(int *param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;

  *param_1 = param_2;
  if (*(char *)((int)param_1 + 10) == '\0') {
    if (((char)param_1[1] == '\x02') &&
       (iVar5 = param_1[0x11c], param_1[0x11c] = iVar5 + -1, iVar5 + -1 < 1)) {
      param_1[0x11c] = 0;
      *(undefined1 *)(param_1 + 1) = 9;
      *(undefined1 *)((int)param_1 + 7) = 0;
    }
    goto LAB_0043fde8;
  }
  iVar5 = FUN_002f43e8();
  if (iVar5 == 0) {
    uVar6 = (uint)(char)param_1[1];
    if ((uVar6 == 1 || uVar6 == 2) || uVar6 == 3) {
      iVar5 = FUN_0033f428(0,0,0x140,0xf0);
      if (iVar5 == 0) {
        uVar6 = *(uint *)(*param_1 + 0x18);
joined_r0x0043fdb8:
        if ((uVar6 & 9) == 0) goto LAB_0043fdc0;
      }
    }
    else {
      bVar7 = uVar6 == 8;
      if (bVar7) {
        uVar6 = (uint)*(byte *)((int)param_1 + 7);
      }
      if (!bVar7 || uVar6 != 0) goto LAB_0043fdc0;
      iVar5 = FUN_0033f428(0,0,0x140,0xf0);
      if (iVar5 == 0) {
        uVar6 = *(uint *)(*param_1 + 0x18);
        goto joined_r0x0043fdb8;
      }
    }
    *(undefined1 *)((int)param_1 + 0xb) = 1;
  }
LAB_0043fdc0:
  if (*(char *)((int)param_1 + 6) == '\x02') {
    FUN_004407a4();
  }
  else {
    FUN_004401a8(param_1);
  }
LAB_0043fde8:
  uStack_28 = *DAT_00440180;
  uStack_24 = DAT_00440180[1];
  uStack_20 = DAT_00440180[2];
  uStack_1c = DAT_00440180[3];
  if (*(char *)((int)param_1 + 6) == '\x01') {
    FUN_002e78f8(param_1,param_1 + 7,param_1[0x126],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x7f,param_1[0x125],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x16,param_1[0x125],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x8e,param_1[0x125],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x25,param_1[0x125],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x34,param_1[0x125],&uStack_28);
    fVar1 = DAT_00440184;
    if (DAT_00440184 < (float)param_1[0x51]) {
      FUN_002e78f8(param_1,param_1 + 0x43,param_1[0x125],&uStack_28);
    }
    FUN_002e78f8(param_1,param_1 + 0x52,param_1[0x125],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x61,param_1[0x125],&uStack_28);
    FUN_002e78f8(param_1,param_1 + 0x70,param_1[0x125],&uStack_28);
    if (*(char *)((int)param_1 + 7) != '\0') {
      FUN_002e78f8(param_1,param_1 + 0x9d,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0xac,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0xbb,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0xca,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0xd9,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0xe8,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0xf7,param_1[0x125],&uStack_28);
      FUN_002e78f8(param_1,param_1 + 0x106,param_1[0x125],&uStack_28);
    }
    if (*(char *)((int)param_1 + 0xf) != '\0') {
      if (((*DAT_00440188 & 1) == 0) &&
         (iVar5 = FUN_003679b4(DAT_00440188), puVar3 = DAT_00440190, uVar2 = DAT_0044018c,
         iVar5 != 0)) {
        *DAT_00440190 = DAT_0044018c;
        puVar3[1] = fVar1;
        puVar3[2] = fVar1;
        puVar3[3] = fVar1;
        puVar3[4] = fVar1;
        puVar3[5] = uVar2;
        puVar3[6] = fVar1;
        puVar3[7] = fVar1;
        puVar3[8] = fVar1;
        puVar3[9] = fVar1;
        puVar3[10] = uVar2;
        puVar3[0xb] = fVar1;
      }
      FUN_00372224(auStack_58,DAT_00440190);
      iVar5 = 0;
      fStack_64 = fVar1;
      fStack_60 = fVar1;
      fStack_5c = fVar1;
      do {
        (**(code **)(*(int *)param_1[iVar5 + 0x171] + 8))
                  ((int *)param_1[iVar5 + 0x171],auStack_58,auStack_58,&fStack_64);
        puVar4 = DAT_00440194;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      if (((*DAT_00440194 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00440194), iVar5 != 0)) {
        FUN_0036788c(DAT_00440198);
      }
      uVar2 = DAT_004401a4;
      FUN_00328350(DAT_004401a4,6,param_1[0x172],1);
      if (((*puVar4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00440194), iVar5 != 0)) {
        FUN_0036788c(DAT_00440198);
      }
      FUN_00328350(uVar2,6,param_1[0x171],1);
    }
    return;
  }
  FUN_002e78f8(param_1,param_1 + 7,param_1[0x126],&uStack_28);
  FUN_002e78f8(param_1,param_1 + 0x43,param_1[0x125],&uStack_28);
  return;
}
