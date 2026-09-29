// OoT3D decomp @ 00181b60  name=FUN_00181b60  size=208

void FUN_00181b60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70);
  iVar1 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x2c);
  if (iVar1 != 0) {
    FUN_00375bcc(param_1,uRam00181c30);
    if (*(char *)(param_1 + 0x1c1) == *(char *)(param_2 + 0x4c30)) {
      FUN_0036beac(param_2,*(undefined1 *)(param_1 + 0x1c0));
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
      if (*(char *)(param_2 + 0x4c30) == '\x04') {
        *(undefined2 *)(iRam00181c44 + 0x5e) = 0xf;
      }
      *(undefined2 *)(param_1 + 0x1c2) = 0x14;
      uVar2 = uRam00181c48;
    }
    else {
      FUN_0037547c(uRam00181c3c,0,4,uRam00181c38,uRam00181c38,uRam00181c34);
      *(undefined2 *)(param_1 + 0x1c2) = 8;
      uVar2 = uRam00181c40;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  }
  return;
}
