// OoT3D decomp @ 0014968c  name=FUN_0014968c  size=1036

void FUN_0014968c(int param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_5c [40];
  undefined1 auStack_34 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar7 = DAT_00149988;
  local_30 = *(float *)(param_1 + 0x28) + fVar6 * DAT_00149988;
  local_2c = *(float *)(param_1 + 0x2c) + DAT_0014998c;
  fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  local_28 = *(float *)(param_1 + 0x30) + fVar6 * fVar7;
  fVar6 = (float)FUN_00358410(param_2 + 0xa98,&local_24,auStack_34,&local_30);
  *(float *)(param_1 + 0x11e8) = fVar6;
  fVar7 = (float)FUN_003696ec(*(float *)(param_1 + 0x2c) - fVar6,fVar7);
  *(short *)(param_1 + 0xbc) = (short)(int)(fVar7 * DAT_00149990);
  FUN_003583d4(param_1,param_2,param_1 + 0x1a8,DAT_00149994,1);
  fVar6 = DAT_001499c4;
  fVar7 = DAT_00149998;
  if (*(char *)(param_1 + 0x1a4) != '\x03') {
    return;
  }
  uVar5 = 0;
  local_2c = DAT_00149998;
  local_28 = DAT_00149998;
  local_24 = DAT_00149998;
  if (*(short *)(param_2 + 0x104) == 0x36) {
    if ((*(int *)(param_1 + 0x28) == DAT_0014999c && *(float *)(param_1 + 0x2c) == DAT_00149998) &&
       (*(int *)(param_1 + 0x30) == DAT_001499a8)) {
      local_2c = DAT_001499ac;
      local_24 = DAT_001499a0;
      uVar5 = DAT_001499a4;
    }
    else if ((*(int *)(param_1 + 0x28) == 0x436e0000 && *(float *)(param_1 + 0x2c) == DAT_00149998)
            && (*(int *)(param_1 + 0x30) == DAT_001499a8)) {
      local_2c = DAT_001499b0;
      local_24 = DAT_001499a0;
      uVar5 = DAT_001499a4;
    }
  }
  else if (*(short *)(param_2 + 0x104) == 99) {
    if ((*(int *)(param_1 + 0x28) == -0x3bc98000) && (*(int *)(param_1 + 0x30) == -0x3b768000)) {
      local_2c = DAT_001499b4;
      local_24 = DAT_001499b8;
    }
    else if ((*(int *)(param_1 + 0x28) == 0x445c0000) && (*(int *)(param_1 + 0x30) == -0x3b6dc000))
    {
      local_2c = DAT_001499bc;
      local_24 = DAT_001499c0;
    }
  }
  pfVar2 = (float *)(param_1 + 0x11b0);
  *pfVar2 = local_2c;
  *(float *)(param_1 + 0x11b4) = fVar7;
  *(float *)(param_1 + 0x11b8) = local_24;
  pfVar4 = (float *)(param_1 + 0x11bc);
  *pfVar4 = *pfVar2;
  *(undefined4 *)(param_1 + 0x11c0) = *(undefined4 *)(param_1 + 0x11b4);
  *(undefined4 *)(param_1 + 0x11c4) = *(undefined4 *)(param_1 + 0x11b8);
  *(float *)(param_1 + 0x11c0) = *(float *)(param_1 + 0x11c0) + fVar6;
  uVar8 = DAT_001499d0;
  uVar9 = DAT_001499cc;
  cVar1 = *(char *)(param_1 + 0x1a5);
  if (cVar1 == '\0') {
    if ((*(int *)(param_1 + 500) <= DAT_001499c8) || ((*(ushort *)(param_1 + 0x11ae) & 8) != 0))
    goto LAB_00149a1c;
    *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) | 8;
    uVar3 = DAT_001499d4;
    pfVar4 = &local_2c;
  }
  else if (cVar1 == '\x03') {
    if ((DAT_001499d8 < *(int *)(param_1 + 500)) && ((*(ushort *)(param_1 + 0x11ae) & 0x10) == 0)) {
      *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) | 0x10;
      uVar3 = DAT_001499dc;
      pfVar4 = pfVar2;
      uVar8 = DAT_001499d0;
      uVar9 = DAT_001499cc;
    }
    else {
      if ((*(ushort *)(param_1 + 0x11ae) & 0x20) == 0) goto LAB_00149a1c;
      *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) & 0xffdf;
      uVar3 = DAT_001499e0;
      uVar8 = DAT_001499d0;
      uVar9 = DAT_001499cc;
    }
  }
  else {
    if ((cVar1 != '\x01') || ((*(ushort *)(param_1 + 0x11ae) & 0x20) == 0)) goto LAB_00149a1c;
    *(ushort *)(param_1 + 0x11ae) = *(ushort *)(param_1 + 0x11ae) & 0xffdf;
    uVar3 = DAT_00149af4;
    uVar8 = DAT_001499d0;
    uVar9 = DAT_001499cc;
  }
  FUN_0037547c(uVar3,pfVar4,4,uVar8,uVar8,uVar9);
LAB_00149a1c:
  FUN_00358338(param_1 + 0xc10,param_1 + 0xc98,param_1 + 0x240);
  *(short *)(param_1 + 0x11ac) = (short)uVar5;
  FUN_00358188(*(undefined4 *)(param_1 + 0x54),*(float *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c),local_2c,
               local_28 + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58),local_24,
               param_1 + 0x117c,(int)*(short *)(param_1 + 0xbc),uVar5,
               (int)*(short *)(param_1 + 0xc0));
  FUN_00372224(auStack_5c,param_1 + 0x148);
  FUN_00372224(param_1 + 0x148,param_1 + 0x117c);
  FUN_001c3180(param_1,param_2,param_1 + 0xc00,0,0,1,0,3);
  FUN_00372224(param_1 + 0x148,auStack_5c);
  *(float *)(param_1 + 0x1304) = local_2c;
  *(float *)(param_1 + 0x1308) = local_28;
  *(float *)(param_1 + 0x130c) = local_24;
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x12b8);
  return;
}
