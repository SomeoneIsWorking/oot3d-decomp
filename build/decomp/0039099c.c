// OoT3D decomp @ 0039099c  name=FUN_0039099c  size=352

void FUN_0039099c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  int iVar7;
  undefined4 uVar8;

  iVar7 = FUN_00357eac(param_1,*(undefined4 *)(DAT_00390afc + param_2));
  iVar4 = FUN_003731e0(param_1 + 0x1b8);
  uVar6 = DAT_00390b0c;
  puVar2 = DAT_00390b08;
  uVar1 = DAT_00390b04;
  if (iVar4 == 0) {
    return;
  }
  if (DAT_00390b00 <= iVar7 + 0xbd73ffffU) {
    if (*(char *)(param_1 + 0x1a5) == '\x01') {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
      if (*(char *)(param_1 + 0x1a5) == '\x01') {
        uVar6 = FUN_0036ae14(param_1 + 0x1b8,DAT_00390b08[1]);
        uVar5 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        uVar6 = FUN_00348854(param_1);
        FUN_00375c08(uVar6,uVar1,uVar5,uVar1,param_1 + 0x1b8,puVar2[*(byte *)(param_1 + 0x1a5)],2);
        return;
      }
    }
    *(byte *)(param_1 + 0x1a5) = bVar3;
    uVar5 = FUN_0036ae14(param_1 + 0x1b8,puVar2[bVar3]);
    uVar8 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = FUN_00348854(param_1);
    FUN_00375c08(uVar5,uVar1,uVar8,uVar6,param_1 + 0x1b8,puVar2[*(byte *)(param_1 + 0x1a5)],2);
    return;
  }
  *(undefined1 *)(param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  uVar5 = FUN_0036ae14(param_1 + 0x1b8,*puVar2);
  uVar8 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = FUN_00348854(param_1);
  FUN_00375c08(uVar5,uVar1,uVar8,uVar6,param_1 + 0x1b8,puVar2[*(byte *)(param_1 + 0x1a5)],2);
  return;
}
