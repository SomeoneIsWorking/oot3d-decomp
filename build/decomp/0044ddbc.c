// OoT3D decomp @ 0044ddbc  name=FUN_0044ddbc  size=368

void FUN_0044ddbc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  float fVar7;
  
  *(undefined4 *)(param_1 + 4) = uRam0044df2c;
  *(undefined4 *)(param_1 + 8) = uRam0044df30;
  FUN_003016e0(1);
  if (((*puRam0044df34 & 1) == 0) && (iVar2 = FUN_003679b4(puRam0044df34), iVar2 != 0)) {
    FUN_0036788c(uRam0044df38);
  }
  uVar3 = uRam0044df4c;
  iVar2 = iRam0044df44;
  *(undefined4 *)(iRam0044df44 + 0x440) = uRam0044df48;
  *(undefined4 *)(iVar2 + 0x444) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x104) = 0;
  puVar6 = (undefined4 *)(param_1 + 0x10c);
  iVar2 = FUN_00313ce0(0x1c4,param_1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002e77e8();
  }
  *puVar6 = uVar3;
  puVar4 = (undefined4 *)FUN_00313ce0(4,param_1);
  uVar3 = uRam0044df50;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uRam0044df50;
  }
  *(undefined4 **)(param_1 + 0x110) = puVar4;
  FUN_002e76b8(*puVar6,puVar4,0x100,0x200,0x80);
  uVar5 = uRam0044df58;
  *(undefined2 *)(iRam0044df54 + (int)puVar6) = 0;
  *(undefined1 *)(param_1 + 0x239) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  FUN_002deff0(param_1 + 0x10c,uVar5);
  puVar6 = (undefined4 *)(param_1 + 0x23c);
  iVar2 = FUN_00313ce0(0x1c4,param_1);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = FUN_002e77e8();
  }
  *puVar6 = uVar5;
  puVar4 = (undefined4 *)FUN_00313ce0(4,param_1);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar3;
  }
  *(undefined4 **)(param_1 + 0x240) = puVar4;
  FUN_002e76b8(*puVar6,puVar4,0x100,0x200,0x80);
  *(undefined2 *)(iRam0044df54 + (int)puVar6) = 0;
  *(undefined1 *)(param_1 + 0x369) = 0;
  puVar6 = (undefined4 *)(param_1 + 0x23c);
  *(undefined1 *)(param_1 + 0x368) = 0;
  uVar5 = DAT_002df144;
  FUN_003446e8(DAT_002df144,*puVar6,0x970,0,0,0x200,0x80,param_1 + 0x244,0);
  iVar2 = (**(code **)(*(int *)*DAT_002df148 + 8))((int *)*DAT_002df148,0x1b8);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00348f34(iVar2,param_1 + 0x244);
  }
  *(undefined4 *)(param_1 + 0x35c) = uVar3;
  iVar2 = (**(code **)(*(int *)*DAT_002df14c + 8))((int *)*DAT_002df14c,0x54);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002ffa20();
  }
  *(undefined4 *)(param_1 + 0x360) = uVar3;
  FUN_002ccf04(*puVar6,uVar3,0);
  FUN_00348a64(*(undefined4 *)(param_1 + 0x35c),0,*(undefined4 *)(param_1 + 0x360),DAT_002df154,
               DAT_002df154,DAT_002df150,DAT_002df150);
  if (((*DAT_002df158 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002df158), iVar2 != 0)) {
    FUN_0036788c(DAT_002df15c);
  }
  iVar1 = FUN_0034897c(*(undefined4 *)(DAT_002df168 + 0x47c),*(undefined4 *)(param_1 + 0x35c),0);
  iVar2 = DAT_002df16c;
  *(int *)(param_1 + 0x364) = iVar1;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + (int)puVar6),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_002df170;
  *(float *)(iVar1 + 0xf0) = fVar7;
  *(float *)(iVar1 + 0xf4) = fVar7;
  *(float *)(iVar1 + 0xf8) = fVar7;
  *(undefined4 *)(iVar1 + 0xfc) = uVar5;
  return;
}

