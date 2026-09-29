// OoT3D decomp @ 002e71b4  name=FUN_002e71b4  size=148

void FUN_002e71b4(int param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  uint extraout_r1_00;
  int iVar3;
  bool bVar4;

  FUN_002e68ac(param_1 + 0x918);
  iVar3 = 0;
  do {
    FUN_003445a8(param_1 + iVar3 * 0x54 + 0x4f8);
    do {
      iVar3 = iVar3 + 1;
      if (0xb < iVar3) {
        iVar3 = 0;
        uVar2 = extraout_r1;
        do {
          iVar1 = param_1 + iVar3 * 0x10;
          bVar4 = *(int *)(iVar1 + 0x40c) != 0;
          if (bVar4) {
            uVar2 = (uint)*(byte *)(iVar1 + 0x414);
          }
          if (bVar4 && uVar2 != 0) {
            FUN_0034fc68();
            uVar2 = extraout_r1_00;
          }
          *(undefined4 *)(iVar1 + 0x40c) = 0;
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar1 + 0x410) = 0;
          *(undefined1 *)(iVar1 + 0x414) = 0;
        } while (iVar3 < 0xf);
        *(undefined1 *)(param_1 + 10) = 0;
        return;
      }
    } while (iVar3 == 1 || iVar3 == 0xb);
  } while( true );
}
