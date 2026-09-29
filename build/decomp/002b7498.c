// OoT3D decomp @ 002b7498  name=FUN_002b7498  size=616

undefined4
FUN_002b7498(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,int param_7,uint param_8)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int local_34;
  int local_30;

  if (param_8 == 0) {
    uVar10 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 0x14);
  }
  if (param_7 != 0) {
    uVar1 = 0;
    if (*(uint *)(param_2 + 0xfc) != 0) {
      do {
        pcVar6 = (char *)(*(int *)(param_2 + 0xf8) + uVar1 * 0x10);
        uVar7 = (uint)(*pcVar6 != '\0');
        bVar11 = uVar7 == (param_8 ^ 1);
        if (bVar11) {
          uVar7 = *(uint *)(pcVar6 + 4);
        }
        if (bVar11 && uVar7 == param_3) {
          local_30 = *(int *)(pcVar6 + 8);
          local_34 = *(int *)(pcVar6 + 0xc);
          goto LAB_002b7598;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_2 + 0xfc));
    }
  }
  iVar5 = FUN_004c8f50(param_2 + 0x1c,param_8,&local_30,&local_34);
  if (iVar5 == 0) {
    return 0;
  }
  local_30 = local_30 << 3;
  local_34 = local_34 << 3;
  pbVar2 = (byte *)(*(int *)(param_2 + 0xf8) + *(int *)(param_2 + 0xfc) * 0x10);
  *pbVar2 = (byte)param_8 ^ 1;
  *(uint *)(pbVar2 + 4) = param_3;
  *(int *)(pbVar2 + 8) = local_30;
  *(int *)(pbVar2 + 0xc) = local_34;
  *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 1;
LAB_002b7598:
  uVar8 = *(undefined4 *)(param_2 + 0x3dc);
  uVar9 = *param_4;
  uVar3 = FUN_002da7d8(uVar10);
  uVar10 = FUN_002da7c8(uVar10);
  uVar4 = FUN_002da60c(*(undefined4 *)(param_2 + 0x10));
  switch(uVar4) {
  case 0:
  case 2:
    FUN_002d2504(param_2,uVar8,*(undefined4 *)(param_2 + 0x3e0),*(undefined4 *)(param_2 + 0x3e4),
                 uVar9,uVar3,uVar10,local_30,local_34);
    break;
  case 1:
    FUN_004c8d1c(param_2,uVar8,*(undefined4 *)(param_2 + 0x3e0),*(undefined4 *)(param_2 + 0x3e4),
                 uVar9,uVar3,uVar10,local_30,local_34);
    break;
  case 3:
  case 4:
    FUN_002d23e0(param_2,uVar8,*(undefined4 *)(param_2 + 0x3e0),*(undefined4 *)(param_2 + 0x3e4),
                 uVar9,uVar3,uVar10,local_30,local_34);
  }
  FUN_002b7234(param_1,param_2,param_5,param_6,uVar3,uVar10,local_30,local_34,
               *(undefined4 *)(param_2 + 0x3e0),*(undefined4 *)(param_2 + 0x3e4),
               param_2 + (uint)*(byte *)(param_2 + 0x2b8) * 0x10 + 0x5c);
  *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + 1;
  if ((param_8 == 0) && (*(int *)(param_2 + 0x2b0) != 0)) {
    iVar5 = FUN_004c8ba4(param_2);
    if (iVar5 == 0) {
      return 0;
    }
    *(int *)(param_2 + 0x2b4) = *(int *)(param_2 + 0x2b4) + 1;
  }
  return 1;
}
