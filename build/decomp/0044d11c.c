// OoT3D decomp @ 0044d11c  name=FUN_0044d11c  size=732

undefined4 * FUN_0044d11c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_158;
  undefined4 local_154;
  undefined2 *local_148;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  local_18 = *DAT_0044d3f8;
  local_14 = DAT_0044d3f8[1];
  local_1c = DAT_0044d3f8[3];
  local_20 = DAT_0044d3f8[2];
  local_28 = 0;
  uStack_24 = 0;
  iVar2 = FUN_00313ce0(0x20);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002fc694(DAT_0044d400,DAT_0044d3fc,iVar2,1);
  }
  param_1[2] = uVar3;
  FUN_002fc534(uVar3,&local_18,&local_20,1,0);
  FUN_002fc40c(param_1[2],&local_28,&local_20,1,0);
  local_2c = DAT_0044d404;
  FUN_002fcdec(param_1[2],&local_2c,1,0);
  local_34 = 0;
  uStack_30 = 0;
  iVar2 = 0;
  do {
    FUN_002f9430(param_1[2],&local_34,1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  local_40 = 0;
  local_3e = 2;
  local_3c = 1;
  local_3a = 1;
  local_38 = 2;
  local_36 = 3;
  FUN_00371738(&local_158,DAT_0044d408,0x118);
  local_158 = FUN_002fc3fc(param_1[2],0);
  local_154 = FUN_002fc3f0(param_1[2],0);
  puVar1 = DAT_0044d40c;
  local_148 = &local_40;
  param_1[1] = 0;
  iVar2 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1,0x1b8);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00348f34(iVar2,&local_158);
  }
  *param_1 = uVar3;
  uVar4 = (uint)*(short *)(param_2 + 0x104);
  uVar3 = 10;
  if (uVar4 == 0x53) {
    if ((*(uint *)(DAT_0044d414 + 0xbc) & *(uint *)(DAT_0044d410 + 0x28)) == 0) goto LAB_0044d32c;
  }
  else if (uVar4 == 0x57) {
    if ((*(int *)(DAT_0044d414 + 4) != 0) ||
       ((*(uint *)(DAT_0044d414 + 0xbc) & *(uint *)(DAT_0044d410 + 8)) != 0)) goto LAB_0044d32c;
  }
  else if (uVar4 == 0x5a) {
    if ((*(int *)(DAT_0044d414 + 4) != 0) || ((~*(ushort *)(DAT_0044d418 + 0xfe) & 0xf) == 0))
    goto LAB_0044d32c;
  }
  else {
    bVar5 = uVar4 != 0x5d;
    if (!bVar5) {
      uVar4 = (uint)*(ushort *)(DAT_0044d418 + 0xfe);
    }
    if (bVar5 || (~uVar4 & 0xf) != 0) goto LAB_0044d32c;
  }
  uVar3 = 0xb;
LAB_0044d32c:
  iVar2 = ObjectBankArchive_00372c90(param_2 + 0x118,uVar3);
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_00348a64(*param_1,0,iVar2,DAT_0044d420,DAT_0044d420,DAT_0044d41c,DAT_0044d41c);
  if (((*DAT_0044d424 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0044d424), iVar2 != 0)) {
    FUN_0036788c(DAT_0044d428);
  }
  iVar2 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_0044d434 + 0x47c),*param_1,0);
  param_1[1] = iVar2;
  uVar4 = *(uint *)(iVar2 + 0x178);
  *(uint *)(iVar2 + 0x178) = uVar4 | 0x10;
  *(uint *)(param_1[1] + 0x178) = uVar4 | 0x12;
  return param_1;
}
