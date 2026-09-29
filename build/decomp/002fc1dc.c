// OoT3D decomp @ 002fc1dc  name=FUN_002fc1dc  size=336

void FUN_002fc1dc(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;

  piVar2 = DAT_00447958;
  iVar1 = DAT_00447954;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_002f9ca0(DAT_002fc254,param_1);
    FUN_00447a8c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0xc) * 4 + 4),
                 *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x24),*(uint *)(param_1 + 0x28) & 0xff);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x14);
    if (0 < (int)uVar7) {
      uVar3 = *(uint *)(param_1 + 0x28);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      iVar9 = *(int *)(DAT_00447954 + 0x9c);
      iVar5 = *DAT_00447958;
      iVar8 = iVar5 - *(int *)(iVar9 + 4);
      *(int *)(iVar9 + 0xc) = iVar8;
      if ((uVar3 & 0xff) == 0) {
        if (*(int *)(iVar9 + 0x14) != iVar8) {
          FUN_00302a1c();
        }
        if (*(int *)(iVar9 + 0x14) == *(int *)(iVar9 + 0xc)) {
          puVar6 = (undefined1 *)(*(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x20) * 0x1c);
          *puVar6 = 1;
          *(uint *)(puVar6 + 8) = uVar7;
          *(undefined4 *)(puVar6 + 4) = uVar4;
          *(uint *)(puVar6 + 0xc) = *(uint *)(puVar6 + 0xc) | 2;
          FUN_0030e038();
          *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 1;
          if (((*(int *)(iVar1 + 0xa0) == iVar9) && (*(char *)(iVar1 + 0x12) != '\0')) &&
             (*(char *)(iVar1 + 0x11) == '\0')) {
            *(undefined1 *)(iVar1 + 0x11) = 1;
            FUN_003027dc();
          }
          FUN_0030dfd8();
          return;
        }
      }
      else {
        FUN_00371738(iVar5,uVar4,uVar7);
        *piVar2 = (uVar7 & 0xfffffffc) + *piVar2;
      }
      return;
    }
  }
  return;
}
