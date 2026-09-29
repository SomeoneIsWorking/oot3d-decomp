// OoT3D decomp @ 001cd0a4  name=FUN_001cd0a4  size=284

void FUN_001cd0a4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == *(short *)(param_1 + 0xc8e)) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 == 0) {
      if (*(short *)(DAT_001cd1c8 + 0x48) < 0x14) {
        *(undefined2 *)(param_1 + 0x116) = 0x85;
        *(undefined2 *)(param_1 + 0xca0) = 0;
        *(undefined2 *)(param_1 + 0xc9e) = 0;
        *(undefined2 *)(param_1 + 0xc98) = 0;
        *(undefined2 *)(param_1 + 0xca4) = 0;
        *(undefined1 *)(param_1 + 0xd1a) = 0;
      }
      else {
        FUN_00376a60(0xffffffec);
        *(short *)(param_1 + 0x116) = (short)DAT_001cd1cc;
      }
    }
    else if (iVar2 == 1) {
      *(undefined2 *)(param_1 + 0x116) = 0x2d;
      *(undefined2 *)(param_1 + 0xca0) = 0;
      *(undefined2 *)(param_1 + 0xc9e) = 0;
      *(undefined2 *)(param_1 + 0xc98) = 0;
      *(undefined2 *)(param_1 + 0xca4) = 0;
      *(undefined1 *)(param_1 + 0xd1a) = 0;
    }
    uVar1 = *(ushort *)(DAT_001cd1c0 + 0xf2);
    bVar4 = (uVar1 & 0x100) != 0;
    if (bVar4) {
      uVar1 = *(ushort *)(param_1 + 0x116);
    }
    if ((bVar4 && uVar1 != 0x85) && uVar1 != 0x2d) {
      FUN_00370778(param_2);
      FUN_0036e980(param_2,0,8);
      uVar3 = DAT_001cd1d0;
    }
    else {
      FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
      *(undefined2 *)(param_1 + 0xc8e) = 5;
      uVar3 = DAT_001cd1c4;
    }
    *(undefined4 *)(param_1 + 0xc7c) = uVar3;
  }
  return;
}
