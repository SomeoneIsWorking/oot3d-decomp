// OoT3D decomp @ 00106934  name=FUN_00106934  size=548

void FUN_00106934(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_00106bb4;
  uVar3 = DAT_00106bb0;
  sVar1 = *(short *)(param_1 + 0x26c);
  if (sVar1 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0xb90)) {
      do {
        if ((*(byte *)(*(int *)(param_1 + 0xb94) + iVar4 * 0x50 + 0x15) & 2) != 0) {
          *(undefined2 *)(param_1 + 0x26e) = 10;
          break;
        }
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < *(int *)(param_1 + 0xb90));
    }
    iVar4 = FUN_003736fc(DAT_00106bc4,uVar2,param_1 + 0x1a4);
    if (iVar4 != 0) {
      FUN_0036fcfc(param_1,param_2,3,5);
      FUN_0036fca8(param_1,param_2,5,0xf);
    }
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,1);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    iVar4 = FUN_003736fc(uVar5,uVar2,param_1 + 0x1a4);
    if (iVar4 != 0) {
      *(undefined2 *)(param_1 + 0x26c) = 1;
      uVar5 = FUN_0036ae14(param_1 + 0x1a4,2);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar3,uVar5,DAT_00106bc8,param_1 + 0x1a4,2,0);
      *(undefined4 *)(param_1 + 0x1050) = uVar3;
      *(undefined4 *)(param_1 + 0x1054) = uVar3;
      if (*(short *)(param_1 + 0x26e) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
  }
  else if (sVar1 == 1) {
    iVar4 = FUN_003736fc(DAT_00106bd0,DAT_00106bb4,param_1 + 0x1a4);
    if (iVar4 != 0) {
      FUN_00375bcc(param_1,DAT_00106bd4);
    }
    if (*(short *)(param_1 + 0x270) == 0) {
      *(undefined2 *)(param_1 + 0x26c) = 2;
      uVar5 = FUN_0036ae14(param_1 + 0x1a4,3);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar3,uVar5,param_1 + 0x1a4,3,2);
      *(undefined4 *)(param_1 + 0x1050) = uVar3;
      *(undefined4 *)(param_1 + 0x1054) = uVar3;
    }
  }
  else if (sVar1 == 2) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar4 = FUN_003736fc(uVar3,uVar2,param_1 + 0x1a4);
    if (iVar4 != 0) {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,0x11);
      VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(uVar3,0x14,0x1e);
    }
  }
  *(undefined2 *)(param_1 + 0x250) = 2;
  *(undefined2 *)(param_1 + 0x254) = 0;
  return;
}
