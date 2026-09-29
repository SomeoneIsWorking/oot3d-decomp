// OoT3D decomp @ 00276508  name=FUN_00276508  size=592

void FUN_00276508(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;

  uVar8 = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_003510b0(param_1,DAT_00276780);
  uVar5 = DAT_00276788;
  uVar1 = DAT_00276784;
  if (uVar8 == 3 || uVar8 == 4) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_00276788;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = DAT_00276784;
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x58) = DAT_0027678c;
  FUN_0037322c(DAT_00276790,param_1);
  uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x248,10,param_1 + 0x24c,9,0);
  uVar6 = FUN_00372f0c(uVar5,6);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x248) + 0xc),uVar6);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x248) + 0xc) + 0x10) = 1;
  uVar5 = FUN_00372f0c(uVar5,5);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x24c) + 0xc),uVar5);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x24c) + 0xc) + 0x10) = 1;
  switch(uVar8) {
  case 0:
  case 1:
  case 2:
    uVar5 = FUN_00353fd4(param_1,param_2,2);
    FUN_003532e8(param_1,1);
    uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    break;
  case 3:
  case 4:
    FUN_00350eb8(param_2,param_1 + 0x1c0);
    FUN_00350d48(param_2,param_1 + 0x1c0,param_1,DAT_00276794,param_1 + 0x1e0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined1 *)(param_1 + 0x1f) = 4;
  }
  iVar7 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  uVar4 = DAT_002767b4;
  uVar5 = DAT_002767a8;
  uVar3 = DAT_002767a4;
  uVar2 = DAT_002767a0;
  uVar6 = DAT_00276798;
  switch(uVar8) {
  case 0:
  case 2:
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0027679c;
      *(undefined4 *)(param_1 + 0x230) = uVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x230) = uVar1;
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      *(undefined2 *)(param_1 + 0x240) = 9;
    }
    break;
  case 1:
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x230) = DAT_00276798;
      uVar5 = uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x230) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar5;
    return;
  case 3:
  case 4:
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x230) = DAT_002767b0;
      *(undefined4 *)(param_1 + 0x1bc) = uVar4;
      return;
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002767ac;
    *(undefined4 *)(param_1 + 0x230) = uVar6;
    break;
  default:
    FUN_00374428(param_1);
    return;
  }
  return;
}
