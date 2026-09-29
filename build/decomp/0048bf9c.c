// OoT3D decomp @ 0048bf9c  name=FUN_0048bf9c  size=276

int FUN_0048bf9c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;

  uVar1 = DAT_0048c0b0;
  iVar2 = *(int *)(param_1 + 4);
  uVar6 = param_2 >> 0x18;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      iVar2 = FUN_002c2938(*(undefined4 *)(iVar2 + 0x3c),param_2);
      if (*(ushort *)(iVar2 + 0x10) == uVar1) {
        iVar2 = iVar2 + *(int *)(iVar2 + 0x14);
      }
      else {
        iVar2 = 0;
      }
      iVar5 = *(int *)(iVar2 + 4);
    }
    else {
      if (uVar6 != 3) {
        return 0;
      }
      iVar2 = FUN_002c296c(*(undefined4 *)(iVar2 + 0x3c),param_2);
      iVar5 = *(int *)(iVar2 + 8);
    }
    return iVar2 + iVar5;
  }
  FUN_003042d4(*(undefined4 *)(iVar2 + 0x3c),param_2);
  iVar5 = FUN_0030429c();
  if (iVar5 == 3) {
    uVar6 = 0;
    piVar3 = (int *)FUN_002c292c(*(undefined4 *)(iVar2 + 0x3c));
    if (*piVar3 != 0) {
      do {
        puVar4 = (uint *)FUN_002c2938(*(undefined4 *)(iVar2 + 0x3c),uVar6 | 0x2000000);
        if ((*puVar4 <= param_2) && (param_2 <= puVar4[1])) {
          if ((ushort)puVar4[4] == uVar1) {
            iVar2 = (int)puVar4 + puVar4[5];
          }
          else {
            iVar2 = 0;
          }
          return iVar2 + *(int *)(iVar2 + 4);
        }
        uVar6 = uVar6 + 1;
        puVar4 = (uint *)FUN_002c292c(*(undefined4 *)(iVar2 + 0x3c));
      } while (uVar6 < *puVar4);
    }
  }
  return 0;
}
