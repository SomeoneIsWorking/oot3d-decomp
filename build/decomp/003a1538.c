// OoT3D decomp @ 003a1538  name=FUN_003a1538  size=540

void FUN_003a1538(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  int local_28;

  uVar5 = DAT_003a1754;
  local_2c = 0;
  *(undefined4 *)(param_1 + 0x6c) = DAT_003a1754;
  FUN_00326a6c(param_1 + 0xec8,&local_28,&local_2c);
  uVar3 = DAT_003a1764;
  uVar2 = DAT_003a1760;
  iVar1 = DAT_003a175c;
  if ((DAT_003a1758 < local_28) && (iVar4 = FUN_00326b20(param_1,param_2), iVar4 == 1)) {
    uVar6 = FUN_00338f60((int)(short)local_2c);
    if (uVar6 < 0xbf000000) {
      iVar4 = FUN_00338f60((int)(short)local_2c);
      if (DAT_003a1768 < iVar4) {
        if ((*(uint *)(param_1 + 0xe54) & 0x300) == 0) {
          *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x200;
          *(undefined2 *)(param_1 + 0x100a) = 0xc;
          *(undefined4 *)(param_1 + 0x1a8) = 0;
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          *(undefined1 *)(param_1 + 0x1a4) = 8;
          *(undefined4 *)(param_1 + 0xe7c) = 0;
        }
        else {
          *(undefined2 *)(param_1 + 0x100a) = 0;
          FUN_00318778(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1a4) = 7;
        *(undefined4 *)(param_1 + 0xe7c) = 0;
        *(undefined1 *)(param_1 + 0xe74) = 4;
        uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                             *(undefined4 *)
                              (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
        uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar3,uVar5,uVar7,uVar2,param_1 + 0x1c4,
                     *(undefined4 *)
                      (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                      (uint)*(byte *)(param_1 + 0xe74) * 4),2);
      }
    }
    else {
      FUN_00318814(param_1);
    }
  }
  iVar4 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar4 != 0) {
    FUN_003478b0(uVar5,param_1 + 0x1c4);
    *(undefined1 *)(param_1 + 0x1a4) = 6;
    *(undefined1 *)(param_1 + 0xe74) = 1;
    uVar7 = *(undefined4 *)(param_1 + 0x200);
    uVar5 = FUN_0036ae14(param_1 + 0x1c4,
                         *(undefined4 *)
                          (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                          (uint)*(byte *)(param_1 + 0xe74) * 4));
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar3,uVar7,uVar5,uVar2,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
    *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
    *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
    if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
      FUN_0037547c(DAT_003a1774,param_1 + 0xe80,4,DAT_003a1770,DAT_003a1770,DAT_003a176c);
    }
  }
  return;
}
