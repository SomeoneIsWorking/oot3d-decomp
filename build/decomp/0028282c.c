// OoT3D decomp @ 0028282c  name=FUN_0028282c  size=324

void FUN_0028282c(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;

  iVar6 = *(int *)(DAT_002829d4 + param_2);
  sVar1 = *(short *)(param_1 + 0x1d2) + -1;
  *(short *)(param_1 + 0x1d2) = sVar1;
  uVar5 = DAT_002829dc;
  uVar4 = DAT_002829d8;
  if (sVar1 != 0) {
    if ((int)SQRT(*(float *)(param_1 + 0x94)) <= DAT_002829e4) {
      uVar2 = *(undefined1 *)(iVar6 + 0x2488);
      cVar3 = *(char *)(iVar6 + 0x2488);
      if ((cVar3 < '\x01') && (*(undefined1 *)(iVar6 + 0x2488) = 0, -0x28 < cVar3)) {
        (**(code **)(DAT_002829e8 + param_2))(param_2,0xfffffff8);
      }
      iVar7 = *(int *)(param_1 + 0x124);
      FUN_00374bb8(DAT_002829f4 + (DAT_002829ec - *(float *)(iVar7 + 0x98)) * DAT_002829f0,uVar5,
                   param_2,iVar7,(int)*(short *)(iVar7 + 0x36));
      *(undefined1 *)(iVar6 + 0x2488) = uVar2;
      *(undefined2 *)(param_1 + 0x1d2) = 1;
    }
    FUN_0037378c(uVar4,param_2,param_1 + 0x28,1,300);
    FUN_003738a8(DAT_002829f8);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
