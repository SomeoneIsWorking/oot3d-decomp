// OoT3D decomp @ 00391200  name=FUN_00391200  size=404

/* WARNING: Removing unreachable block (ram,0x0033d578) */
/* WARNING: Removing unreachable block (ram,0x0033d5cc) */
/* WARNING: Removing unreachable block (ram,0x0033d5d4) */
/* WARNING: Removing unreachable block (ram,0x0033d5e8) */
/* WARNING: Removing unreachable block (ram,0x0033d608) */
/* WARNING: Removing unreachable block (ram,0x0033d554) */
/* WARNING: Removing unreachable block (ram,0x0033d550) */
/* WARNING: Removing unreachable block (ram,0x0033d558) */
/* WARNING: Removing unreachable block (ram,0x0033d58c) */
/* WARNING: Removing unreachable block (ram,0x0033d5a0) */

void FUN_00391200(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  uVar1 = uRam00391394;
  iVar4 = *(int *)(param_1 + 0x1a8) + -1;
  *(int *)(param_1 + 0x1a8) = iVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  if (-1 < iVar4) {
    return;
  }
  *(byte *)(param_1 + 0xeee) = *(byte *)(param_1 + 0xeee) | 1;
  *(byte *)(param_1 + 0xf46) = *(byte *)(param_1 + 0xf46) | 1;
  *(byte *)(param_1 + 0xf9e) = *(byte *)(param_1 + 0xf9e) | 1;
  uVar2 = DAT_0033d678;
  if (*(int *)(param_1 + 0xe70) != 1) {
    uVar3 = *(undefined4 *)(param_1 + 0xe78);
    *(undefined1 *)(param_1 + 0x1a4) = 2;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    if (*(char *)(param_1 + 0xe74) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xe74) = 0;
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
    iVar4 = DAT_0033d68c;
    uVar2 = FUN_0036ae14(param_1 + 0x1c4,
                         *(undefined4 *)
                          (*(int *)(DAT_0033d68c + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                          (uint)*(byte *)(param_1 + 0xe74) * 4));
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0033d690,uVar3,uVar2,uVar1,param_1 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar4 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    return;
  }
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffff7f;
  if (*(short *)(param_1 + 0x1c) == 4) {
LAB_0039133c:
    FUN_003478b0(uVar1,param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0xe78) = uVar1;
    FUN_00357d6c(param_1);
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
  }
  else {
    if (*(short *)(param_1 + 0x1c) == 9) {
      *(undefined2 *)(param_1 + 0x1c) = 5;
      iVar4 = FUN_0037571c(param_2);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x6c) = uRam00391398;
        *(undefined1 *)(param_1 + 0x1a4) = 10;
        uVar2 = uRam0039139c;
        if (*(char *)(param_1 + 0xe74) == '\x05') {
          *(undefined1 *)(param_1 + 0xe74) = 8;
          uVar2 = uVar1;
        }
        else {
          *(undefined1 *)(param_1 + 0xe74) = 7;
        }
        *(undefined4 *)(param_1 + 0xe98) = 0;
        uVar5 = *(undefined4 *)
                 (*(int *)(iRam003913a0 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                 (uint)*(byte *)(param_1 + 0xe74) * 4);
        uVar3 = FUN_0036ae14(param_1 + 0x1c4,uVar5);
        uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uRam003913a4,uVar1,uVar3,uVar2,param_1 + 0x1c4,uVar5,2);
        goto LAB_00391360;
      }
    }
    else if (*(char *)(param_1 + 0xeb6) != '\x02') goto LAB_0039133c;
    FUN_00357d6c(param_1);
  }
LAB_00391360:
  if (*(short *)(param_1 + 0x1c) != 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  return;
}
