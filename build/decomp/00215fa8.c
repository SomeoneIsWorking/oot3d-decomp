// OoT3D decomp @ 00215fa8  name=FUN_00215fa8  size=760

void FUN_00215fa8(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  FUN_003510b0(param_1,DAT_002162a0);
  *(undefined4 *)(param_1 + 0x1e4) = DAT_002162a4;
  uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar4,uVar5,uVar6,param_1 + 0x1a8,0,0,0,0,0);
  uVar4 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar4,uVar5,uVar6,param_1 + 0x1c4,0,0,0,0,0);
  uVar4 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c0) = uVar4;
  if (*(short *)(*DAT_002162a8 + 0x4b2) == 0) {
    *(undefined4 *)(param_1 + 0x58) = DAT_002162b0;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = DAT_002162ac;
  }
  *(undefined4 *)(param_1 + 0x1dc) = DAT_002162b4;
  puVar1 = DAT_002162bc;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_002162b8 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  if (((*DAT_002162bc & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002162bc), iVar3 != 0)) {
    FUN_0036788c(DAT_002162c0);
  }
  *(undefined4 *)(*(int *)(DAT_002162c0 + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
  uVar4 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0x2f);
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002162bc), iVar3 != 0)) {
    FUN_0036788c(DAT_002162c0);
  }
  iVar3 = (**(code **)(**(int **)(DAT_002162c0 + 0x17c) + 8))
                    (*(int **)(DAT_002162c0 + 0x17c),uVar4,1);
  *(int *)(param_1 + 0x1e8) = iVar3;
  *(undefined1 *)(iVar3 + 0xad) = 0;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002162bc), iVar3 != 0)) {
    FUN_0036788c(DAT_002162c0);
  }
  *(undefined4 *)(*(int *)(DAT_002162c0 + 0x17c) + 8) = 0;
  uVar4 = FUN_00372f0c(iVar2 + 0x10,0x1a);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1e8) + 0xc),uVar4);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0xc) + 0x10) = 1;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x1e8),2);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar4 = FUN_0036c5bc(param_2,0xffffffff);
  FUN_00367c54();
  FUN_00367c60(*(undefined4 *)(param_2 + 0x1b0),uVar4);
  *(undefined4 *)(param_1 + 0x1ec) = uVar4;
  return;
}
