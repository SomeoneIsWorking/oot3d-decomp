// OoT3D decomp @ 00447748  name=FUN_00447748  size=244

int FUN_00447748(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  FUN_002e5d60(DAT_0044783c);
  iVar1 = DAT_00447840;
  do {
    iVar2 = FUN_0044d5e4(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + -0x30) = param_2;
      *(undefined2 *)(iVar2 + -0x2a) = 1;
      iVar4 = *(int *)(iVar1 + 0x10);
      *(int *)(iVar4 + 0x14) = iVar2 + -0x30;
      *(int *)(iVar2 + -0x20) = iVar4;
      *(int *)(iVar2 + -0x1c) = iVar1;
      *(int *)(iVar1 + 0x10) = iVar2 + -0x30;
      break;
    }
    iVar5 = 0;
    iVar4 = *(int *)(iVar1 + 0x14);
    do {
      while( true ) {
        if (iVar4 == iVar1) goto LAB_00447824;
        if ((((*(ushort *)(iVar4 + 6) & 2) == 0) && (*(int *)(iVar4 + 0x20) < 0)) &&
           (*(short *)(iVar4 + 4) == 0)) break;
        iVar4 = *(int *)(iVar4 + 0x14);
      }
      iVar6 = *(int *)(iVar4 + 0x14);
      iVar5 = iVar5 + 1;
      *(int *)(*(int *)(iVar4 + 0x10) + 0x14) = iVar6;
      *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      iVar3 = FUN_002e5bb4(iVar4 + 0x30);
      iVar4 = iVar6;
    } while (*(int *)(iVar3 + 0x20) < param_1 + 0x30);
LAB_00447824:
  } while (0 < iVar5);
  FUN_002e5cfc(DAT_0044783c);
  return iVar2;
}
