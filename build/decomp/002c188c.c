// OoT3D decomp @ 002c188c  name=FUN_002c188c  size=244

undefined4 FUN_002c188c(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;

  puVar3 = (uint *)*param_1;
  if (puVar3 == (uint *)0x0) {
    return DAT_002c1980;
  }
  if (0xe < *(byte *)((int)puVar3 + 1)) {
    return DAT_002c1988;
  }
  uVar10 = *puVar3;
  uVar2 = (uVar10 << 0x10) >> 0x18;
  uVar4 = (uVar10 & 0xff) + uVar2;
  puVar7 = (undefined4 *)
           (*param_1 +
           (uVar4 + (uint)((ulonglong)uVar4 * (ulonglong)DAT_002c1984 >> 0x23) * -0xf) * 0x20 + 0x20
           );
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  *puVar7 = *param_2;
  puVar7[1] = uVar5;
  puVar7[2] = uVar6;
  puVar7[3] = uVar8;
  puVar7[4] = uVar9;
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  puVar7[5] = param_2[5];
  puVar7[6] = uVar5;
  puVar7[7] = uVar6;
  coproc_moveto_Data_Synchronization(0);
  uVar2 = (uVar2 + 1) * 0x100 & 0xff00 | uVar10 & 0xffff00ff;
  while( true ) {
    bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
    if (bVar1) break;
    uVar2 = *(uint *)*param_1 & 0xffff00ff |
            (((*(uint *)*param_1 << 0x10) >> 0x18) + 1) * 0x100 & 0xff00;
  }
  *(uint *)*param_1 = uVar2;
  if ((uVar2 << 0x10) >> 0x18 == 1) {
    FUN_0030dd98();
    FUN_004a07f8();
  }
  return 0;
}
