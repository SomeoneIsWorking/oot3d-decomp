// OoT3D decomp @ 00404d80  name=FUN_00404d80  size=212

undefined4 FUN_00404d80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0030a5fc(param_1 + 600,*param_2);
  *(int *)(param_1 + 0x218) = param_1 + 600;
  uVar1 = UNK_00404e54;
  *(int *)(param_1 + 0x21c) = iVar3;
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  *(int *)(param_1 + 0x224) = param_1;
  *(undefined4 *)(param_1 + 0x228) = param_2[1];
  *(undefined4 *)(param_1 + 0x22c) = *param_2;
  uVar1 = ((undefined4 *)param_2[2])[1];
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)param_2[2];
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  uVar1 = ((undefined4 *)param_2[3])[1];
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)param_2[3];
  *(undefined4 *)(param_1 + 0x23c) = uVar1;
  uVar1 = *(undefined4 *)(param_2[3] + 0xc);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2[3] + 8);
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  uVar1 = *(undefined4 *)(param_2[3] + 0x14);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2[3] + 0x10);
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  uVar1 = *(undefined4 *)(param_2[3] + 0x1c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2[3] + 0x18);
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(undefined4 *)(param_1 + 500) = *param_3;
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined1 *)(param_1 + 0x4b8) = 1;
  uVar1 = FUN_0030c8bc();
  FUN_0030ab9c(uVar1,param_1 + 0x200,1);
  return 1;
}

