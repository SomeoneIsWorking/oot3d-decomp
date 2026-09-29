// OoT3D decomp @ 004225e8  name=FUN_004225e8  size=384

undefined4 FUN_004225e8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  *(undefined4 *)(param_1 + 0x448) = param_2;
  iVar1 = FUN_00437e70(param_1,DAT_00422768);
  if (iVar1 != 0) {
    uVar2 = FUN_002facdc(param_1 + 0x10c);
    uVar3 = FUN_003222dc(param_2,uVar2,4,0,0,0);
    *(undefined4 *)(param_1 + 0x444) = uVar3;
    iVar1 = FUN_00437d30(param_1,uVar3,uVar2);
    if (iVar1 != 0) {
      uVar2 = FUN_002faca4(param_1 + 0x10c);
      uVar3 = FUN_003222dc(param_2,uVar2,4,0,0,0);
      *(undefined4 *)(param_1 + 0x434) = uVar3;
      iVar1 = FUN_00437dcc(param_1,uVar3,uVar2);
      if (iVar1 != 0) {
        uVar2 = FUN_002fac84(param_1 + 0x16c,param_1);
        uVar3 = FUN_003222dc(param_2,uVar2,4,0,0,0);
        *(undefined4 *)(param_1 + 0x438) = uVar3;
        FUN_002fab78(param_1 + 0x16c,param_1,uVar3,uVar2);
        uVar2 = FUN_002faa24(param_1 + 0x388,param_1);
        uVar3 = FUN_003222dc(param_2,uVar2,0x20,0,0,0);
        *(undefined4 *)(param_1 + 0x43c) = uVar3;
        uVar3 = FUN_002fa9f4(param_1 + 0x388,param_1);
        uVar4 = FUN_003222dc(param_2,uVar3,0x20,0,0,0);
        *(undefined4 *)(param_1 + 0x440) = uVar4;
        uVar2 = FUN_002fa904(param_1 + 0x388,param_1,param_1 + 0x16c,
                             *(undefined4 *)(param_1 + 0x43c),uVar2,uVar4,uVar3);
        return uVar2;
      }
    }
  }
  return 0;
}
