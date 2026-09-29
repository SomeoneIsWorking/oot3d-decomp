// OoT3D decomp @ 003f1510  name=FUN_003f1510  size=1472

void FUN_003f1510(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;

  iVar1 = FUN_00373074(param_2 + 0x3a58,*(undefined1 *)(param_1 + 0x2f2));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x2f2);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x2e4);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x1a4);
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    case 0:
      *(undefined1 *)(param_1 + 0x2f4) = 1;
      uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x318,0x39,param_1 + 0x31c,0x39,param_1 + 800,
                           0x39,param_1 + 0x324,0x39,param_1 + 0x328,0x39,param_1 + 0x32c,0x39,
                           param_1 + 0x330,0x39,param_1 + 0x334,0x39,param_1 + 0x338,0x39,
                           param_1 + 0x33c,0x39,param_1 + 0x340,0x39,param_1 + 0x344,0x39,
                           param_1 + 0x348,0x39,param_1 + 0x34c,0x39,param_1 + 0x350,0x39,
                           param_1 + 0x354,0x39,param_1 + 0x358,0x39,0);
      uVar3 = DAT_003f1970;
      iVar1 = DAT_003f196c;
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x36c) = uVar2;
      do {
        iVar6 = param_1 + iVar5 * 4;
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x318) + 0xc);
        uVar4 = FUN_00372f0c(uVar2,*(undefined4 *)
                                    (iVar1 + (uint)*(byte *)(param_1 + iVar5 + 0x2d4) * 4));
        FUN_00372d94(uVar7,uVar4);
        iVar5 = iVar5 + 1;
        *(undefined1 *)(*(int *)(*(int *)(iVar6 + 0x318) + 0xc) + 0x10) = 1;
        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x318) + 0xc) + 0xc) = uVar3;
      } while (iVar5 < 0x10);
      uVar2 = FUN_00372f0c(uVar2,0x34);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x358) + 0xc),uVar2);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x358) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x358) + 0xc) + 0xc) = uVar3;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x2f4) = 1;
      uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x2f8,1,param_1 + 0x2fc,1,param_1 + 0x300,1,
                           param_1 + 0x304,1,param_1 + 0x308,1,param_1 + 0x30c,1,0);
      uVar3 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0xc),uVar3);
      uVar3 = DAT_003f1970;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2f8) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2f8) + 0xc) + 0xc) = uVar3;
      uVar4 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2fc) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2fc) + 0xc) + 0xc) = uVar3;
      uVar4 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x300) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x300) + 0xc) + 0xc) = uVar3;
      uVar4 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x304) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x304) + 0xc) + 0xc) = uVar3;
      uVar4 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x308) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x308) + 0xc) + 0xc) = uVar3;
      uVar2 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0xc),uVar2);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x30c) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30c) + 0xc) + 0xc) = uVar3;
      return;
    case 2:
      *(undefined1 *)(param_1 + 0x2f4) = 1;
      uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x314,2,param_1 + 0x310,0,0);
      uVar2 = FUN_00372f0c(uVar3,2);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0xc),uVar2);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x314) + 0xc) + 0x10) = 1;
      uVar3 = FUN_00372f0c(uVar3,1);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0xc),uVar3);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x310) + 0xc) + 0x10) = 1;
      return;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      *(undefined1 *)(param_1 + 0x2f4) = 1;
      uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x318,0x39,param_1 + 0x31c,0x39,param_1 + 0x35c
                           ,0x38,param_1 + 0x360,0x38,0);
      iVar1 = DAT_003f196c;
      uVar3 = FUN_00372f0c(uVar2,*(undefined4 *)
                                  (DAT_003f196c + (uint)*(byte *)(param_1 + 0x2f3) * 4));
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0xc),uVar3);
      uVar3 = DAT_003f1970;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x318) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x318) + 0xc) + 0xc) = uVar3;
      uVar4 = FUN_00372f0c(uVar2,*(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x2f3) * 4));
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x31c) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x31c) + 0xc) + 0xc) = uVar3;
      uVar4 = FUN_00372f0c(uVar2,*(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x2f3) * 4));
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0xc),uVar4);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x35c) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x35c) + 0xc) + 0xc) = uVar3;
      uVar2 = FUN_00372f0c(uVar2,*(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x2f3) * 4));
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x360) + 0xc),uVar2);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x360) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x360) + 0xc) + 0xc) = uVar3;
      return;
    case 0xc:
      *(undefined1 *)(param_1 + 0x2f4) = 1;
      uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x364,0,0);
      uVar3 = FUN_00372f0c(uVar3,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0xc),uVar3);
      uVar3 = DAT_003f1970;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x364) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x364) + 0xc) + 0xc) = uVar3;
      return;
    }
  }
  return;
}
