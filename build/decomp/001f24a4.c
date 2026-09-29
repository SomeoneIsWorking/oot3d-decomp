// OoT3D decomp @ 001f24a4  name=FUN_001f24a4  size=256

undefined4 FUN_001f24a4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;

  FUN_0036df4c(param_3,param_4);
  FUN_0036df4c(param_3 + 0xc,param_4 + 0xc);
  FUN_0036df4c(param_3 + 0x18,param_4 + 0x18);
  iVar2 = iRam001f25f8;
  *(undefined2 *)(param_3 + 0x60) = *(undefined2 *)(param_4 + 0x30);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar2 + (uint)*(byte *)(param_4 + 0x34) * 4);
  *(undefined4 *)(param_3 + 0x28) = uRam001f25fc;
  if ((*(ushort *)(param_4 + 0x32) & 4) == 0) {
    if ((*(ushort *)(param_4 + 0x32) & 8) != 0) {
      *(undefined4 *)(param_3 + 0x24) = uRam001f2608;
    }
    *(ushort *)(param_3 + 0x44) = (ushort)*(byte *)(param_4 + 0x24);
    *(ushort *)(param_3 + 0x46) = (ushort)*(byte *)(param_4 + 0x25);
    *(ushort *)(param_3 + 0x48) = (ushort)*(byte *)(param_4 + 0x26);
    *(ushort *)(param_3 + 0x4c) = (ushort)*(byte *)(param_4 + 0x28);
    *(ushort *)(param_3 + 0x4e) = (ushort)*(byte *)(param_4 + 0x29);
    *(ushort *)(param_3 + 0x50) = (ushort)*(byte *)(param_4 + 0x2a);
    uVar1 = (ushort)*(byte *)(param_4 + 0x27);
    if (*(byte *)(param_4 + 0x27) == 0) {
      uVar1 = 0xff;
    }
    *(ushort *)(param_3 + 0x52) = uVar1;
    *(ushort *)(param_3 + 0x4a) = uVar1;
    *(undefined2 *)(param_3 + 0x54) = 0;
    *(undefined2 *)(param_3 + 0x56) = *(undefined2 *)(param_4 + 0x2c);
    *(undefined2 *)(param_3 + 0x58) = *(undefined2 *)(param_4 + 0x2e);
    *(undefined2 *)(param_3 + 0x5c) = *(undefined2 *)(param_4 + 0x30);
    iVar2 = 0;
    *(undefined2 *)(param_3 + 0x5a) = *(undefined2 *)(param_4 + 0x32);
    do {
      FUN_0034ea48(*(undefined4 *)(*(int *)(param_3 + 0x68) + iVar2 * 4),uRam001f260c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
