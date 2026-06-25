// OoT3D decomp @ 0036b2d4  name=FUN_0036b2d4  size=260

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0036b2d4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  
  iVar3 = FUN_003518cc();
  if (iVar3 != 0) {
    FUN_0036055c(param_3,param_2,DAT_0036b3d8,1);
    uVar4 = *(uint *)(param_2 + 0x1710) & 0x1000000;
    if (*(int *)(param_2 + 0x225c) < 0x3f000000) {
      bVar6 = uVar4 != 0;
      if (bVar6) {
        uVar4 = (uint)*(ushort *)(param_2 + 0x2218);
      }
      uVar5 = DAT_0036b3e0;
      uVar1 = DAT_0036b3e4;
      if (!bVar6 || uVar4 == 0) {
        uVar5 = *(undefined4 *)(DAT_0036b3dc + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0x90);
      }
    }
    else {
      bVar6 = uVar4 != 0;
      if (bVar6) {
        uVar4 = (uint)*(ushort *)(param_2 + 0x2218);
      }
      uVar5 = DAT_0036b3e8;
      uVar1 = DAT_0036b3ec;
      if (!bVar6 || uVar4 == 0) {
        uVar5 = *(undefined4 *)(DAT_0036b3dc + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0x78);
      }
    }
    *(undefined4 *)(param_2 + 0x225c) = uVar1;
    *(undefined4 *)(param_2 + 0x2260) = uVar1;
    FUN_00359aa0(param_2 + 0x254,param_3,uVar5);
    *(undefined2 *)(param_2 + 0x2220) = *(undefined2 *)(param_2 + 0xbe);
    return;
  }
  if ((*(uint *)(param_2 + 0x1710) & DAT_0036b3f0) != 0) {
    FUN_0036055c(param_3,param_2,DAT_002bca90,1);
    uVar1 = FUN_0034d628(param_2);
    uVar5 = DAT_002bca94;
    uVar2 = FUN_003603c0(param_2 + 0x254,uVar1);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(DAT_002bca9c,DAT_002bca98,uVar2,uVar5,param_2 + 0x254,param_3,uVar1,2);
    *(undefined2 *)(DAT_002bcaa0 + param_2) = *(undefined2 *)(param_2 + 0xbe);
    return;
  }
  FUN_0034bc38(param_1,param_2,param_3);
  return;
}

