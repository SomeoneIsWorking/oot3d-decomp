// OoT3D decomp @ 004c3064  name=FUN_004c3064  size=996

void FUN_004c3064(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  FUN_0034cc78(param_1);
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar3 == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
    if ((~*(uint *)(*(int *)(param_1 + 0x172c) + 4) & 5) != 0) {
      FUN_00334354(param_1);
    }
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    if ((*(byte *)(param_1 + 0x172a) & 0x20) == 0) {
      if (*(char *)(param_2 + 0x5c74) == '\0') {
        if (*(char *)(param_1 + 0x1749) == '\x03') {
          FUN_0036055c(param_2,param_1,DAT_004c3458,0);
          if (*(short *)(DAT_004c345c + param_1) != 0) {
            *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
          }
          FUN_0034bbfc(param_1);
        }
        else if ((*(int *)(param_1 + 0x172c) != *(int *)(param_1 + 0x12b0)) ||
                (iVar3 = FUN_00354894(param_1,param_2), iVar3 == 0)) {
          uVar5 = *(uint *)(param_1 + 0x1710);
          if ((uVar5 & 0x800000) == 0) {
            bVar6 = (uVar5 & 0x8000000) == 0;
            if (!bVar6) {
              uVar5 = (uint)*(byte *)(param_1 + 0x1a7);
            }
            if (bVar6 || uVar5 == 1) {
              FUN_0034bc38(DAT_004c3464,param_1,param_2);
            }
            else {
              FUN_002bdd68(param_2,param_1);
            }
          }
          else {
            uVar2 = *(undefined2 *)(param_1 + 0x2238);
            FUN_002b7fd0(param_1,param_2);
            uVar4 = DAT_004c3460;
            uVar1 = *(undefined1 *)(param_1 + 0x2a6);
            *(undefined1 *)(param_1 + 0x2a6) = 0;
            FUN_0036055c(param_2,param_1,uVar4,0);
            *(undefined1 *)(param_1 + 0x2a6) = uVar1;
            *(undefined2 *)(param_1 + 0x2238) = uVar2;
          }
        }
      }
      else {
        FUN_0036b0fc(param_2,param_1);
        FUN_0036b02c(param_2,param_1);
        FUN_0036055c(param_2,param_1,DAT_004c3450,0);
        iVar3 = FUN_0034dd2c(param_1);
        if ((iVar3 == 0) || (iVar3 = FUN_00355a60(param_1), iVar3 != 0)) {
          FUN_0034d688(param_2,param_1,3);
        }
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x100000;
        uVar4 = FUN_0034d628(param_1);
        FUN_003604f0(param_1 + 0x254,param_2,uVar4);
        uVar4 = DAT_004c3454;
        *(undefined4 *)(param_1 + 0x6c) = DAT_004c3454;
        *(undefined4 *)(param_1 + 0x221c) = uVar4;
        *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xbe);
        *(undefined2 *)(param_1 + 0x175a) = 0;
        *(undefined2 *)(param_1 + 0x1758) = 0;
        *(undefined2 *)(param_1 + 0x1756) = 0;
        *(undefined2 *)(param_1 + 0x1754) = 0;
        *(undefined2 *)(param_1 + 0x1752) = 0;
        *(undefined2 *)(param_1 + 0x1750) = 0;
        *(undefined2 *)(param_1 + 0x4c) = 0;
        *(undefined2 *)(param_1 + 0x48) = 0;
      }
    }
    else {
      *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xdf;
      if (*(char *)((uint)*(byte *)(DAT_004c3448 + 7) + DAT_004c344c) == '\a') {
        uVar1 = 0x1c;
      }
      else {
        uVar1 = 0x1d;
      }
      *(undefined1 *)(param_1 + 0x1ac) = uVar1;
      *(undefined1 *)(param_1 + 0x1749) = 4;
      FUN_003518dc(param_1,param_2);
    }
    *(undefined1 *)(param_1 + 0x227a) = 0xf;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x1710);
    if ((uVar5 & 0x800000) == 0) {
      bVar6 = (uVar5 & 0x8000000) == 0;
      if (!bVar6) {
        uVar5 = (uint)*(byte *)(param_1 + 0x1a7);
      }
      if (bVar6 || uVar5 == 1) {
        iVar3 = FUN_003518cc(param_1);
        if ((iVar3 == 0) &&
           (iVar3 = FUN_0036b4ec(param_1 + 0x254,param_2), uVar4 = DAT_004c3468, iVar3 != 0)) {
          if (*(char *)(param_1 + 0x2a6) == '\0') {
            FUN_003404a8(DAT_004c3468,param_1 + 0x254,param_2,0x5f);
          }
          else {
            FUN_00334c44(param_1);
            if ((*(char *)(*(int *)(param_1 + 0x172c) + 2) == '\x04') &&
               (*(char *)(param_1 + 0x1a9) != '\x02')) {
              FUN_00358dfc(uVar4,param_1 + 0x254,param_2,0x60);
            }
            else {
              uVar4 = FUN_0034d628(param_1);
              FUN_00359aa0(param_1 + 0x254,param_2,uVar4);
            }
          }
        }
      }
      else {
        FUN_004bee78(param_1,param_2);
      }
    }
    else {
      FUN_002b7fd0(param_1,param_2);
    }
    if ((*(int *)(param_1 + 0x16f8) != 0) && (*(char *)(param_2 + 0x5c74) == '\0')) {
      uVar2 = FUN_003341e4(param_1,0);
      *(undefined2 *)(param_1 + 0xbe) = uVar2;
      *(undefined2 *)(param_1 + 0x2220) = uVar2;
      return;
    }
  }
  return;
}
