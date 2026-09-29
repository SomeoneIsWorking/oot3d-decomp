// OoT3D decomp @ 00189854  name=FUN_00189854  size=320

void FUN_00189854(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;

  FUN_003510b0(param_1,DAT_00189994,param_3,param_4,param_4);
  iVar3 = DAT_00189998;
  *(undefined1 *)(param_1 + 0x284) = 0;
  uVar5 = 1;
  *(int *)(param_1 + 0x28c) = (int)*(char *)(iVar3 + param_2);
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  sVar2 = *(short *)(param_1 + 0x1c);
  if (sVar2 != 2) {
    if (sVar2 != 3) {
      if (sVar2 == 4) {
        *(undefined4 *)(param_1 + 0x27c) = 1;
        *(undefined2 *)(param_1 + 0x1c) = 0;
      }
      goto LAB_001898bc;
    }
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x280) = uVar5;
  *(undefined2 *)(param_1 + 0x1c) = 0;
LAB_001898bc:
  FUN_00372f38(param_1,param_2,param_1 + 0x278,1,0);
  FUN_00372d4c(DAT_001899a4,DAT_0018999c,param_1 + 0xbc,DAT_001899a0);
  *(undefined1 *)(param_1 + 0xb6) = 200;
  *(undefined2 *)(param_1 + 0xb0) = 5;
  *(undefined2 *)(param_1 + 0xb2) = 10;
  *(undefined2 *)(param_1 + 0x26c) = 0x69;
  *(undefined2 *)(param_1 + 0x26e) = 7;
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00350eb8(param_2,param_1 + 0x1fc);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_001899a8);
  FUN_00350d48(param_2,param_1 + 0x1fc,param_1,DAT_001899ac,param_1 + 0x21c);
  *(char *)(param_1 + 0x221) =
       *(char *)(param_1 + 0x221) + (char)((ushort)*(undefined2 *)(param_1 + 0xc0) >> 8);
  uVar1 = *(ushort *)(param_1 + 0xc0);
  uVar4 = uVar1 & 0xff;
  *(ushort *)(param_1 + 0xc0) = uVar4;
  if ((uVar1 & 0x80) != 0) {
    *(ushort *)(param_1 + 0xc0) = uVar4 | 0xff00;
  }
  *(undefined4 *)(param_1 + 0x290) = DAT_001899b0;
  return;
}
