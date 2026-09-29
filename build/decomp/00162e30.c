// OoT3D decomp @ 00162e30  name=FUN_00162e30  size=576

void FUN_00162e30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  uVar1 = DAT_0016307c;
  if (*(int *)(DAT_00163070 + 0x10) == 0) {
    FUN_00372d4c(DAT_0016307c,DAT_00163074,param_1 + 0xbc,DAT_00163078);
    FUN_00372f38(param_1,param_2,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x294,0);
    *(undefined1 *)(param_1 + 0x309) = 0;
    FUN_0035c358(param_1 + 0x31c,param_1 + 0x294,0);
    uVar3 = FUN_0036a924(param_1,param_2,1,0x5a);
    *(undefined4 *)(param_1 + 0x318) = uVar3;
    uVar3 = DAT_00163084;
    if (((*DAT_00163080 & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_00163080), puVar2 = DAT_00163088, iVar4 != 0)) {
      *DAT_00163088 = uVar3;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      puVar2[3] = uVar1;
      puVar2[4] = uVar1;
      puVar2[5] = uVar3;
      puVar2[6] = uVar1;
      puVar2[7] = uVar1;
      puVar2[8] = uVar1;
      puVar2[9] = uVar1;
      puVar2[10] = uVar3;
      puVar2[0xb] = uVar1;
    }
    FUN_00372224(param_1 + 0x238,DAT_00163088);
    FUN_00353dd0(param_2,param_1 + 0x1a8);
    FUN_00353d24(param_2,param_1 + 0x1a8,param_1,DAT_0016308c);
    FUN_00350318(param_1 + 0xa0,DAT_00163094,DAT_00163090);
    FUN_00376340(uVar1,uVar1,uVar1,param_2,param_1,4);
    puVar2 = DAT_00163098;
    uVar5 = FUN_0036ae14(param_1 + 0x294,*(undefined4 *)*DAT_00163098);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar3,uVar1,uVar5,puVar2[3],param_1 + 0x294,*puVar2,*(undefined1 *)(puVar2 + 2));
    *(undefined4 *)(param_1 + 0x70) = DAT_0016309c;
    *(undefined1 *)(param_1 + 0x1f) = 6;
    *(uint *)(param_1 + 0x214) = *(ushort *)(param_1 + 0x1c) & 0xff;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x200) = 0;
    FUN_00350248(param_1,0,param_1 + 0x230);
    uVar1 = DAT_001630a0;
    *(undefined4 *)(param_1 + 0x22c) = uVar3;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
