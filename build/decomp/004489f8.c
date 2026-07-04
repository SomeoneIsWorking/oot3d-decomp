// OoT3D decomp @ 004489f8  name=FUN_004489f8  size=420

undefined4 FUN_004489f8(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  
  func_0x0044efec();
  func_0x0044e0b4(param_1);
  iVar1 = iRam00448b9c;
  piVar5 = (int *)(iRam00448b9c + -0x1500);
  if (*(short *)(iRam00448b9c + 0xa4) != -1) {
    if (*(short *)(iRam00448b9c + 0xa4) == -0x7fff) {
      *(int *)(iRam00448b9c + -0x14ec) = *(int *)(iRam00448b9c + -0x14ec) + 1;
      *(int *)(iVar1 + -0x14e8) = *(int *)(iVar1 + -0x14e8) + 1;
      *(undefined1 *)(iVar1 + 0xaa) = 1;
      iVar4 = FUN_00316cec(param_1,0x21,0x22);
      if ((iVar4 != 0) || (iVar4 = FUN_00316cec(param_1,0x2d,0x2e), iVar4 != 0)) {
        FUN_00367c7c(param_1,uRam00448ba0,0);
      }
      uVar3 = 0xfffe;
    }
    else {
      uVar3 = 0xfffd;
    }
    *(undefined2 *)(iVar1 + 0xa4) = uVar3;
  }
  iVar4 = *piRam00448ba4;
  *(undefined2 *)(iVar4 + 0x18a) = 0xffff;
  *(undefined2 *)(iVar4 + 400) = 0;
  *(undefined4 *)(iRam00448ba8 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x7f12) = 0;
  *(undefined1 *)(param_1 + 0x5c77) = 0;
  func_0x00452358(param_1 + 0xa90);
  func_0x0045719c();
  func_0x00452348();
  iVar4 = iRam00448bac;
  *(undefined1 *)(param_1 + 0x5c2d) = 0xec;
  *(undefined2 *)(param_1 + 0x5c2e) = 0xff;
  *(undefined2 *)(iVar4 + param_1) = 0;
  *(undefined2 *)(param_1 + 0x5c30) = 0;
  *(undefined1 *)(param_1 + 0x5c01) = 0;
  *(undefined1 *)(param_1 + 0x7f25) = 1;
  func_0x00454914(param_1 + 0x7f48);
  if (*(int *)(iVar1 + -0x1c) == 1) {
    if (*(char *)(iVar1 + 0x76) == '\0') {
      uVar2 = 6;
    }
    else {
      uVar2 = 4;
    }
    *(undefined1 *)(param_1 + 0x5c76) = uVar2;
  }
  else if (*(char *)(iVar1 + 0xab) == -1) {
    *(byte *)(param_1 + 0x5c76) =
         (byte)(((uint)*(ushort *)
                        (iRam00448bb0 + (*piVar5 + (uint)*(byte *)(param_1 + 0x7f41)) * 4 + 2) <<
                0x12) >> 0x19);
  }
  else {
    *(char *)(param_1 + 0x5c76) = *(char *)(iVar1 + 0xab);
    *(undefined1 *)(iVar1 + 0xab) = 0xff;
  }
  func_0x00451a4c();
  return 2;
}

