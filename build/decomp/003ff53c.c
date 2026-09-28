// OoT3D decomp @ 003ff53c  name=FUN_003ff53c  size=436

int FUN_003ff53c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;

  iVar1 = (**(code **)(*(int *)*puRam003ff6f4 + 0xc))
                    ((int *)*puRam003ff6f4,0x34,uRam003ff6f0,0x2c,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x0040c9e0(iVar1,param_2);
  }
  iVar1 = (**(code **)(*(int *)*puRam003ff6f8 + 0xc))((int *)*puRam003ff6f8,0x14,uRam003ff6f0,0x2d);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_003fcf90();
  }
  FUN_003fcd1c(uVar3,param_2);
  iVar4 = (**(code **)(*(int *)*puRam003ff6fc + 0xc))
                    ((int *)*puRam003ff6fc,uRam003ff700,uRam003ff6f0,0x2f);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = FUN_003faf58(iVar4,param_2);
  }
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  iVar4 = (**(code **)(*(int *)*puRam003ff704 + 0xc))((int *)*puRam003ff704,0x14,uRam003ff6f0,0x37);
  puVar5 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)func_0x003ff354();
  }
  *puVar5 = uVar2;
  iVar4 = (**(code **)(*(int *)*puRam003ff708 + 0xc))((int *)*puRam003ff708,0x98,uRam003ff6f0,0x3a);
  puVar6 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    puVar6 = (undefined4 *)func_0x00352e80();
  }
  *puVar6 = uVar3;
  iVar7 = (**(code **)(*(int *)*puRam003ff70c + 0xc))((int *)*puRam003ff70c,0xb0,uRam003ff6f0,0x3e);
  iVar4 = 0;
  if (iVar7 != 0) {
    iVar4 = FUN_003fede4(iVar7,uVar2,iVar1,puVar5,puVar6);
  }
  *(undefined4 *)(iVar4 + 0x10) = uVar3;
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (param_3 == 0) {
    iVar7 = (**(code **)(*(int *)*puRam003ff710 + 0xc))
                      ((int *)*puRam003ff710,0x234,uRam003ff6f0,0x44);
    puVar5 = (undefined4 *)0x0;
    if (iVar7 != 0) {
      puVar5 = (undefined4 *)FUN_00347258();
    }
    *puVar5 = *(undefined4 *)(param_1 + 4);
    FUN_003feb14(iVar4,puVar5);
  }
  FUN_003f9f3c(iVar1,puVar5);
  return iVar4;
}
